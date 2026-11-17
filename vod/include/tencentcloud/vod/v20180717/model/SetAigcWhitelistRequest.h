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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETAIGCWHITELISTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETAIGCWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcWhitelistModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SetAigcWhitelist请求参数结构体
                */
                class SetAigcWhitelistRequest : public AbstractModel
                {
                public:
                    SetAigcWhitelistRequest();
                    ~SetAigcWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>AIGC任务类型</p><p>枚举值：</p><ul><li>Image： AIGC 生图任务</li><li>Video： AIGC 生视频任务</li></ul>
                     * @return AigcType <p>AIGC任务类型</p><p>枚举值：</p><ul><li>Image： AIGC 生图任务</li><li>Video： AIGC 生视频任务</li></ul>
                     * 
                     */
                    std::string GetAigcType() const;

                    /**
                     * 设置<p>AIGC任务类型</p><p>枚举值：</p><ul><li>Image： AIGC 生图任务</li><li>Video： AIGC 生视频任务</li></ul>
                     * @param _aigcType <p>AIGC任务类型</p><p>枚举值：</p><ul><li>Image： AIGC 生图任务</li><li>Video： AIGC 生视频任务</li></ul>
                     * 
                     */
                    void SetAigcType(const std::string& _aigcType);

                    /**
                     * 判断参数 AigcType 是否已赋值
                     * @return AigcType 是否已赋值
                     * 
                     */
                    bool AigcTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只有允许调用ModelWhitelist中列出的模型</li><li>OFF： 关闭，允许调用所有模型</li></ul>
                     * @return ModelWhitelistSwitch <p>模型白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只有允许调用ModelWhitelist中列出的模型</li><li>OFF： 关闭，允许调用所有模型</li></ul>
                     * 
                     */
                    std::string GetModelWhitelistSwitch() const;

                    /**
                     * 设置<p>模型白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只有允许调用ModelWhitelist中列出的模型</li><li>OFF： 关闭，允许调用所有模型</li></ul>
                     * @param _modelWhitelistSwitch <p>模型白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只有允许调用ModelWhitelist中列出的模型</li><li>OFF： 关闭，允许调用所有模型</li></ul>
                     * 
                     */
                    void SetModelWhitelistSwitch(const std::string& _modelWhitelistSwitch);

                    /**
                     * 判断参数 ModelWhitelistSwitch 是否已赋值
                     * @return ModelWhitelistSwitch 是否已赋值
                     * 
                     */
                    bool ModelWhitelistSwitchHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只允许IpWhitelist中列出的IP段进行调用</li><li>OFF： 关闭，允许所有IP进行调用</li></ul>
                     * @return IpWhitelistSwitch <p>IP白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只允许IpWhitelist中列出的IP段进行调用</li><li>OFF： 关闭，允许所有IP进行调用</li></ul>
                     * 
                     */
                    std::string GetIpWhitelistSwitch() const;

                    /**
                     * 设置<p>IP白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只允许IpWhitelist中列出的IP段进行调用</li><li>OFF： 关闭，允许所有IP进行调用</li></ul>
                     * @param _ipWhitelistSwitch <p>IP白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只允许IpWhitelist中列出的IP段进行调用</li><li>OFF： 关闭，允许所有IP进行调用</li></ul>
                     * 
                     */
                    void SetIpWhitelistSwitch(const std::string& _ipWhitelistSwitch);

                    /**
                     * 判断参数 IpWhitelistSwitch 是否已赋值
                     * @return IpWhitelistSwitch 是否已赋值
                     * 
                     */
                    bool IpWhitelistSwitchHasBeenSet() const;

                    /**
                     * 获取<p>模型白名单列表</p>
                     * @return ModelWhitelist <p>模型白名单列表</p>
                     * 
                     */
                    std::vector<AigcWhitelistModel> GetModelWhitelist() const;

                    /**
                     * 设置<p>模型白名单列表</p>
                     * @param _modelWhitelist <p>模型白名单列表</p>
                     * 
                     */
                    void SetModelWhitelist(const std::vector<AigcWhitelistModel>& _modelWhitelist);

                    /**
                     * 判断参数 ModelWhitelist 是否已赋值
                     * @return ModelWhitelist 是否已赋值
                     * 
                     */
                    bool ModelWhitelistHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单的CIDR列表</p>
                     * @return IpWhitelist <p>IP白名单的CIDR列表</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置<p>IP白名单的CIDR列表</p>
                     * @param _ipWhitelist <p>IP白名单的CIDR列表</p>
                     * 
                     */
                    void SetIpWhitelist(const std::vector<std::string>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>AIGC任务类型</p><p>枚举值：</p><ul><li>Image： AIGC 生图任务</li><li>Video： AIGC 生视频任务</li></ul>
                     */
                    std::string m_aigcType;
                    bool m_aigcTypeHasBeenSet;

                    /**
                     * <p>模型白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只有允许调用ModelWhitelist中列出的模型</li><li>OFF： 关闭，允许调用所有模型</li></ul>
                     */
                    std::string m_modelWhitelistSwitch;
                    bool m_modelWhitelistSwitchHasBeenSet;

                    /**
                     * <p>IP白名单开关</p><p>枚举值：</p><ul><li>ON： 打开，只允许IpWhitelist中列出的IP段进行调用</li><li>OFF： 关闭，允许所有IP进行调用</li></ul>
                     */
                    std::string m_ipWhitelistSwitch;
                    bool m_ipWhitelistSwitchHasBeenSet;

                    /**
                     * <p>模型白名单列表</p>
                     */
                    std::vector<AigcWhitelistModel> m_modelWhitelist;
                    bool m_modelWhitelistHasBeenSet;

                    /**
                     * <p>IP白名单的CIDR列表</p>
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETAIGCWHITELISTREQUEST_H_
