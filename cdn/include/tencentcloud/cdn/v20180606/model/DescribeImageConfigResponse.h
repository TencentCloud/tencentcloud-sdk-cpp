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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIMAGECONFIGRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIMAGECONFIGRESPONSE_H_

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
                * DescribeImageConfig返回参数结构体
                */
                class DescribeImageConfigResponse : public AbstractModel
                {
                public:
                    DescribeImageConfigResponse();
                    ~DescribeImageConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取WebpAdapter配置
                     * @return WebpAdapter WebpAdapter配置
                     * 
                     */
                    WebpAdapter GetWebpAdapter() const;

                    /**
                     * 判断参数 WebpAdapter 是否已赋值
                     * @return WebpAdapter 是否已赋值
                     * 
                     */
                    bool WebpAdapterHasBeenSet() const;

                    /**
                     * 获取TpgAdapter配置
                     * @return TpgAdapter TpgAdapter配置
                     * 
                     */
                    TpgAdapter GetTpgAdapter() const;

                    /**
                     * 判断参数 TpgAdapter 是否已赋值
                     * @return TpgAdapter 是否已赋值
                     * 
                     */
                    bool TpgAdapterHasBeenSet() const;

                    /**
                     * 获取GuetzliAdapter配置
                     * @return GuetzliAdapter GuetzliAdapter配置
                     * 
                     */
                    GuetzliAdapter GetGuetzliAdapter() const;

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
                     * 判断参数 AvifAdapter 是否已赋值
                     * @return AvifAdapter 是否已赋值
                     * 
                     */
                    bool AvifAdapterHasBeenSet() const;

                private:

                    /**
                     * WebpAdapter配置
                     */
                    WebpAdapter m_webpAdapter;
                    bool m_webpAdapterHasBeenSet;

                    /**
                     * TpgAdapter配置
                     */
                    TpgAdapter m_tpgAdapter;
                    bool m_tpgAdapterHasBeenSet;

                    /**
                     * GuetzliAdapter配置
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

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIMAGECONFIGRESPONSE_H_
