/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTRULEREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyAccessWhiteListRule请求参数结构体
                */
                class ModifyAccessWhiteListRuleRequest : public AbstractModel
                {
                public:
                    ModifyAccessWhiteListRuleRequest();
                    ~ModifyAccessWhiteListRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单规则ID
                     * @return Id 白名单规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置白名单规则ID
                     * @param _id 白名单规则ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取ip或网段信息，如10.10.10.1或10.10.10.0/24，最大长度40字节
                     * @return Source ip或网段信息，如10.10.10.1或10.10.10.0/24，最大长度40字节
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置ip或网段信息，如10.10.10.1或10.10.10.0/24，最大长度40字节
                     * @param _source ip或网段信息，如10.10.10.1或10.10.10.0/24，最大长度40字节
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
                     * 获取备注信息，最大长度64字符。
                     * @return Remark 备注信息，最大长度64字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，最大长度64字符。
                     * @param _remark 备注信息，最大长度64字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 白名单规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * ip或网段信息，如10.10.10.1或10.10.10.0/24，最大长度40字节
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 备注信息，最大长度64字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACCESSWHITELISTRULEREQUEST_H_
