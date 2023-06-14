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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ATTACKLOGINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ATTACKLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 攻击日志详情
                */
                class AttackLogInfo : public AbstractModel
                {
                public:
                    AttackLogInfo();
                    ~AttackLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击日志的详情内容
                     * @return Content 攻击日志的详情内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置攻击日志的详情内容
                     * @param _content 攻击日志的详情内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取CLS返回内容
                     * @return FileName CLS返回内容
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置CLS返回内容
                     * @param _fileName CLS返回内容
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取CLS返回内容
                     * @return Source CLS返回内容
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置CLS返回内容
                     * @param _source CLS返回内容
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取CLS返回内容
                     * @return TimeStamp CLS返回内容
                     * 
                     */
                    std::string GetTimeStamp() const;

                    /**
                     * 设置CLS返回内容
                     * @param _timeStamp CLS返回内容
                     * 
                     */
                    void SetTimeStamp(const std::string& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * 攻击日志的详情内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * CLS返回内容
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * CLS返回内容
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * CLS返回内容
                     */
                    std::string m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ATTACKLOGINFO_H_
