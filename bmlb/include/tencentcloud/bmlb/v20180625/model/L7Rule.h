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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_L7RULE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_L7RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/L7RulesLocation.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取七层监听器转发规则时返回的转发规则。
                */
                class L7Rule : public AbstractModel
                {
                public:
                    L7Rule();
                    ~L7Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发域名。
                     * @return Domain 转发域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发域名。
                     * @param _domain 转发域名。
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
                     * 获取转发域名实例ID。
                     * @return DomainId 转发域名实例ID。
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置转发域名实例ID。
                     * @param _domainId 转发域名实例ID。
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取转发路径当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * @return Status 转发路径当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置转发路径当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * @param _status 转发路径当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间戳。
                     * @return AddTimestamp 创建时间戳。
                     * 
                     */
                    std::string GetAddTimestamp() const;

                    /**
                     * 设置创建时间戳。
                     * @param _addTimestamp 创建时间戳。
                     * 
                     */
                    void SetAddTimestamp(const std::string& _addTimestamp);

                    /**
                     * 判断参数 AddTimestamp 是否已赋值
                     * @return AddTimestamp 是否已赋值
                     * 
                     */
                    bool AddTimestampHasBeenSet() const;

                    /**
                     * 获取该转发域名下面的转发路径列表。
                     * @return LocationSet 该转发域名下面的转发路径列表。
                     * 
                     */
                    std::vector<L7RulesLocation> GetLocationSet() const;

                    /**
                     * 设置该转发域名下面的转发路径列表。
                     * @param _locationSet 该转发域名下面的转发路径列表。
                     * 
                     */
                    void SetLocationSet(const std::vector<L7RulesLocation>& _locationSet);

                    /**
                     * 判断参数 LocationSet 是否已赋值
                     * @return LocationSet 是否已赋值
                     * 
                     */
                    bool LocationSetHasBeenSet() const;

                private:

                    /**
                     * 转发域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 转发域名实例ID。
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 转发路径当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间戳。
                     */
                    std::string m_addTimestamp;
                    bool m_addTimestampHasBeenSet;

                    /**
                     * 该转发域名下面的转发路径列表。
                     */
                    std::vector<L7RulesLocation> m_locationSet;
                    bool m_locationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_L7RULE_H_
