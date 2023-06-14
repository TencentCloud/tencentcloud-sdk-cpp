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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEIMAGECONFIGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEIMAGECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/WebpAdapter.h>
#include <tencentcloud/cdn/v20180606/model/TpgAdapter.h>
#include <tencentcloud/cdn/v20180606/model/GuetzliAdapter.h>
#include <tencentcloud/cdn/v20180606/model/AvifAdapter.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * UpdateImageConfig请求参数结构体
                */
                class UpdateImageConfigRequest : public AbstractModel
                {
                public:
                    UpdateImageConfigRequest();
                    ~UpdateImageConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取WebpAdapter配置项
                     * @return WebpAdapter WebpAdapter配置项
                     * 
                     */
                    WebpAdapter GetWebpAdapter() const;

                    /**
                     * 设置WebpAdapter配置项
                     * @param _webpAdapter WebpAdapter配置项
                     * 
                     */
                    void SetWebpAdapter(const WebpAdapter& _webpAdapter);

                    /**
                     * 判断参数 WebpAdapter 是否已赋值
                     * @return WebpAdapter 是否已赋值
                     * 
                     */
                    bool WebpAdapterHasBeenSet() const;

                    /**
                     * 获取TpgAdapter配置项
                     * @return TpgAdapter TpgAdapter配置项
                     * 
                     */
                    TpgAdapter GetTpgAdapter() const;

                    /**
                     * 设置TpgAdapter配置项
                     * @param _tpgAdapter TpgAdapter配置项
                     * 
                     */
                    void SetTpgAdapter(const TpgAdapter& _tpgAdapter);

                    /**
                     * 判断参数 TpgAdapter 是否已赋值
                     * @return TpgAdapter 是否已赋值
                     * 
                     */
                    bool TpgAdapterHasBeenSet() const;

                    /**
                     * 获取GuetzliAdapter配置项
                     * @return GuetzliAdapter GuetzliAdapter配置项
                     * 
                     */
                    GuetzliAdapter GetGuetzliAdapter() const;

                    /**
                     * 设置GuetzliAdapter配置项
                     * @param _guetzliAdapter GuetzliAdapter配置项
                     * 
                     */
                    void SetGuetzliAdapter(const GuetzliAdapter& _guetzliAdapter);

                    /**
                     * 判断参数 GuetzliAdapter 是否已赋值
                     * @return GuetzliAdapter 是否已赋值
                     * 
                     */
                    bool GuetzliAdapterHasBeenSet() const;

                    /**
                     * 获取AvifAdapter配置项
                     * @return AvifAdapter AvifAdapter配置项
                     * 
                     */
                    AvifAdapter GetAvifAdapter() const;

                    /**
                     * 设置AvifAdapter配置项
                     * @param _avifAdapter AvifAdapter配置项
                     * 
                     */
                    void SetAvifAdapter(const AvifAdapter& _avifAdapter);

                    /**
                     * 判断参数 AvifAdapter 是否已赋值
                     * @return AvifAdapter 是否已赋值
                     * 
                     */
                    bool AvifAdapterHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * WebpAdapter配置项
                     */
                    WebpAdapter m_webpAdapter;
                    bool m_webpAdapterHasBeenSet;

                    /**
                     * TpgAdapter配置项
                     */
                    TpgAdapter m_tpgAdapter;
                    bool m_tpgAdapterHasBeenSet;

                    /**
                     * GuetzliAdapter配置项
                     */
                    GuetzliAdapter m_guetzliAdapter;
                    bool m_guetzliAdapterHasBeenSet;

                    /**
                     * AvifAdapter配置项
                     */
                    AvifAdapter m_avifAdapter;
                    bool m_avifAdapterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEIMAGECONFIGREQUEST_H_
