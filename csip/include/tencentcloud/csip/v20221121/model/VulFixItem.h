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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞修复项，指定一个漏洞/KB补丁及其需要修复的目标主机
                */
                class VulFixItem : public AbstractModel
                {
                public:
                    VulFixItem();
                    ~VulFixItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>需要修复的主机实例ID列表<br>入参限制：单项最多1000个实例ID</p>
                     * @return InstanceIds <p>需要修复的主机实例ID列表<br>入参限制：单项最多1000个实例ID</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>需要修复的主机实例ID列表<br>入参限制：单项最多1000个实例ID</p>
                     * @param _instanceIds <p>需要修复的主机实例ID列表<br>入参限制：单项最多1000个实例ID</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>漏洞ID，VulId和KBId二选一</p>
                     * @return VulId <p>漏洞ID，VulId和KBId二选一</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>漏洞ID，VulId和KBId二选一</p>
                     * @param _vulId <p>漏洞ID，VulId和KBId二选一</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>KB补丁ID，VulId和KBId二选一</p>
                     * @return KBId <p>KB补丁ID，VulId和KBId二选一</p>
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置<p>KB补丁ID，VulId和KBId二选一</p>
                     * @param _kBId <p>KB补丁ID，VulId和KBId二选一</p>
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                private:

                    /**
                     * <p>需要修复的主机实例ID列表<br>入参限制：单项最多1000个实例ID</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>漏洞ID，VulId和KBId二选一</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>KB补丁ID，VulId和KBId二选一</p>
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXITEM_H_
