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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanAssetTarget.h>
#include <tencentcloud/csip/v20221121/model/ImageScanRegistryFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateImageRegistryScanTask请求参数结构体
                */
                class CreateImageRegistryScanTaskRequest : public AbstractModel
                {
                public:
                    CreateImageRegistryScanTaskRequest();
                    ~CreateImageRegistryScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>扫描类型</p><p>枚举值：</p><ul><li>VUL： 漏洞</li><li>VIRUS： 木马</li><li>RISK： 敏感信息</li></ul>
                     * @return ScanType <p>扫描类型</p><p>枚举值：</p><ul><li>VUL： 漏洞</li><li>VIRUS： 木马</li><li>RISK： 敏感信息</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>扫描类型</p><p>枚举值：</p><ul><li>VUL： 漏洞</li><li>VIRUS： 木马</li><li>RISK： 敏感信息</li></ul>
                     * @param _scanType <p>扫描类型</p><p>枚举值：</p><ul><li>VUL： 漏洞</li><li>VIRUS： 木马</li><li>RISK： 敏感信息</li></ul>
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>超时时间，单位秒</p>
                     * @return Timeout <p>超时时间，单位秒</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间，单位秒</p>
                     * @param _timeout <p>超时时间，单位秒</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>任务名</p>
                     * @return Name <p>任务名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _name <p>任务名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>扫描目标镜像过滤配置</p>
                     * @return Target <p>扫描目标镜像过滤配置</p>
                     * 
                     */
                    ImageScanAssetTarget GetTarget() const;

                    /**
                     * 设置<p>扫描目标镜像过滤配置</p>
                     * @param _target <p>扫描目标镜像过滤配置</p>
                     * 
                     */
                    void SetTarget(const ImageScanAssetTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>镜像过滤配置</p>
                     * @return Filter <p>镜像过滤配置</p>
                     * 
                     */
                    ImageScanRegistryFilter GetFilter() const;

                    /**
                     * 设置<p>镜像过滤配置</p>
                     * @param _filter <p>镜像过滤配置</p>
                     * 
                     */
                    void SetFilter(const ImageScanRegistryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>扫描类型</p><p>枚举值：</p><ul><li>VUL： 漏洞</li><li>VIRUS： 木马</li><li>RISK： 敏感信息</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>超时时间，单位秒</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>扫描目标镜像过滤配置</p>
                     */
                    ImageScanAssetTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>镜像过滤配置</p>
                     */
                    ImageScanRegistryFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYSCANTASKREQUEST_H_
