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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_INTRUSIONDEFENSERULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_INTRUSIONDEFENSERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 入侵防御封禁列表、放通列表添加规则入参
                */
                class IntrusionDefenseRule : public AbstractModel
                {
                public:
                    IntrusionDefenseRule();
                    ~IntrusionDefenseRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则方向，0出站，1入站，3内网间
                     * @return Direction 规则方向，0出站，1入站，3内网间
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置规则方向，0出站，1入站，3内网间
                     * @param _direction 规则方向，0出站，1入站，3内网间
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取规则结束时间，格式：2006-01-02 15:04:05，必须大于当前时间
                     * @return EndTime 规则结束时间，格式：2006-01-02 15:04:05，必须大于当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置规则结束时间，格式：2006-01-02 15:04:05，必须大于当前时间
                     * @param _endTime 规则结束时间，格式：2006-01-02 15:04:05，必须大于当前时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取规则IP地址，IP与Domain必填其中之一
                     * @return IP 规则IP地址，IP与Domain必填其中之一
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置规则IP地址，IP与Domain必填其中之一
                     * @param _iP 规则IP地址，IP与Domain必填其中之一
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取规则域名，IP与Domain必填其中之一
                     * @return Domain 规则域名，IP与Domain必填其中之一
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置规则域名，IP与Domain必填其中之一
                     * @param _domain 规则域名，IP与Domain必填其中之一
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则开始时间
                     * @return StartTime 规则开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置规则开始时间
                     * @param _startTime 规则开始时间
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
                     * 获取备注信息，长度不能超过50
                     * @return Comment 备注信息，长度不能超过50
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注信息，长度不能超过50
                     * @param _comment 备注信息，长度不能超过50
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 规则方向，0出站，1入站，3内网间
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 规则结束时间，格式：2006-01-02 15:04:05，必须大于当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 规则IP地址，IP与Domain必填其中之一
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 规则域名，IP与Domain必填其中之一
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备注信息，长度不能超过50
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_INTRUSIONDEFENSERULE_H_
