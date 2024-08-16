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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXTASKQUUIDS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXTASKQUUIDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 创建修复任务的quuids
                */
                class CreateVulFixTaskQuuids : public AbstractModel
                {
                public:
                    CreateVulFixTaskQuuids();
                    ~CreateVulFixTaskQuuids() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param _vulId 漏洞id
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取需要修复漏洞的主机，所有主机必须有VulId的这个漏洞且是待修复状态。
                     * @return Quuids 需要修复漏洞的主机，所有主机必须有VulId的这个漏洞且是待修复状态。
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置需要修复漏洞的主机，所有主机必须有VulId的这个漏洞且是待修复状态。
                     * @param _quuids 需要修复漏洞的主机，所有主机必须有VulId的这个漏洞且是待修复状态。
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取修复方式 0组件更新或者安装补丁,1禁用服务
                     * @return FixMethod 修复方式 0组件更新或者安装补丁,1禁用服务
                     * 
                     */
                    uint64_t GetFixMethod() const;

                    /**
                     * 设置修复方式 0组件更新或者安装补丁,1禁用服务
                     * @param _fixMethod 修复方式 0组件更新或者安装补丁,1禁用服务
                     * 
                     */
                    void SetFixMethod(const uint64_t& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 需要修复漏洞的主机，所有主机必须有VulId的这个漏洞且是待修复状态。
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 修复方式 0组件更新或者安装补丁,1禁用服务
                     */
                    uint64_t m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXTASKQUUIDS_H_
