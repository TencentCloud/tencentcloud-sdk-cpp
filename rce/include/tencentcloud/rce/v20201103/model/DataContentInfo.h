/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_DATACONTENTINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_DATACONTENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 黑白名单导入名单数据的业务入参数据结构
                */
                class DataContentInfo : public AbstractModel
                {
                public:
                    DataContentInfo();
                    ~DataContentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名单数据内容
                     * @return DataContent 名单数据内容
                     * 
                     */
                    std::string GetDataContent() const;

                    /**
                     * 设置名单数据内容
                     * @param _dataContent 名单数据内容
                     * 
                     */
                    void SetDataContent(const std::string& _dataContent);

                    /**
                     * 判断参数 DataContent 是否已赋值
                     * @return DataContent 是否已赋值
                     * 
                     */
                    bool DataContentHasBeenSet() const;

                    /**
                     * 获取名单数据描述
                     * @return DataRemark 名单数据描述
                     * 
                     */
                    std::string GetDataRemark() const;

                    /**
                     * 设置名单数据描述
                     * @param _dataRemark 名单数据描述
                     * 
                     */
                    void SetDataRemark(const std::string& _dataRemark);

                    /**
                     * 判断参数 DataRemark 是否已赋值
                     * @return DataRemark 是否已赋值
                     * 
                     */
                    bool DataRemarkHasBeenSet() const;

                    /**
                     * 获取名单数据开始时间
                     * @return StartTime 名单数据开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置名单数据开始时间
                     * @param _startTime 名单数据开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取名单数据结束时间
                     * @return EndTime 名单数据结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置名单数据结束时间
                     * @param _endTime 名单数据结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 名单数据内容
                     */
                    std::string m_dataContent;
                    bool m_dataContentHasBeenSet;

                    /**
                     * 名单数据描述
                     */
                    std::string m_dataRemark;
                    bool m_dataRemarkHasBeenSet;

                    /**
                     * 名单数据开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 名单数据结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_DATACONTENTINFO_H_
