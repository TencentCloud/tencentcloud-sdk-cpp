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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_AGEDETECTTASKRESULT_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_AGEDETECTTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 年龄语音任务结果
                */
                class AgeDetectTaskResult : public AbstractModel
                {
                public:
                    AgeDetectTaskResult();
                    ~AgeDetectTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据唯一ID
                     * @return DataId 数据唯一ID
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置数据唯一ID
                     * @param _dataId 数据唯一ID
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取数据文件的url
                     * @return Url 数据文件的url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置数据文件的url
                     * @param _url 数据文件的url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取任务状态，0: 已创建，1:运行中，2:正常结束，3:异常结束，4:运行超时
                     * @return Status 任务状态，0: 已创建，1:运行中，2:正常结束，3:异常结束，4:运行超时
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态，0: 已创建，1:运行中，2:正常结束，3:异常结束，4:运行超时
                     * @param _status 任务状态，0: 已创建，1:运行中，2:正常结束，3:异常结束，4:运行超时
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务结果：0: 成年，1:未成年，100:未知
                     * @return Age 任务结果：0: 成年，1:未成年，100:未知
                     * 
                     */
                    uint64_t GetAge() const;

                    /**
                     * 设置任务结果：0: 成年，1:未成年，100:未知
                     * @param _age 任务结果：0: 成年，1:未成年，100:未知
                     * 
                     */
                    void SetAge(const uint64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                private:

                    /**
                     * 数据唯一ID
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 数据文件的url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 任务状态，0: 已创建，1:运行中，2:正常结束，3:异常结束，4:运行超时
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务结果：0: 成年，1:未成年，100:未知
                     */
                    uint64_t m_age;
                    bool m_ageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_AGEDETECTTASKRESULT_H_
