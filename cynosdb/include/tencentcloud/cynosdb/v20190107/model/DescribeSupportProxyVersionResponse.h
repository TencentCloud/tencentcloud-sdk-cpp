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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESUPPORTPROXYVERSIONRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESUPPORTPROXYVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyVersionInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeSupportProxyVersion返回参数结构体
                */
                class DescribeSupportProxyVersionResponse : public AbstractModel
                {
                public:
                    DescribeSupportProxyVersionResponse();
                    ~DescribeSupportProxyVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的数据库代理版本集合
                     * @return SupportProxyVersions 支持的数据库代理版本集合
                     * 
                     */
                    std::vector<std::string> GetSupportProxyVersions() const;

                    /**
                     * 判断参数 SupportProxyVersions 是否已赋值
                     * @return SupportProxyVersions 是否已赋值
                     * 
                     */
                    bool SupportProxyVersionsHasBeenSet() const;

                    /**
                     * 获取当前proxy版本号
                     * @return CurrentProxyVersion 当前proxy版本号
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 判断参数 CurrentProxyVersion 是否已赋值
                     * @return CurrentProxyVersion 是否已赋值
                     * 
                     */
                    bool CurrentProxyVersionHasBeenSet() const;

                    /**
                     * 获取代理版本详情
                     * @return SupportProxyVersionDetail 代理版本详情
                     * 
                     */
                    std::vector<ProxyVersionInfo> GetSupportProxyVersionDetail() const;

                    /**
                     * 判断参数 SupportProxyVersionDetail 是否已赋值
                     * @return SupportProxyVersionDetail 是否已赋值
                     * 
                     */
                    bool SupportProxyVersionDetailHasBeenSet() const;

                private:

                    /**
                     * 支持的数据库代理版本集合
                     */
                    std::vector<std::string> m_supportProxyVersions;
                    bool m_supportProxyVersionsHasBeenSet;

                    /**
                     * 当前proxy版本号
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * 代理版本详情
                     */
                    std::vector<ProxyVersionInfo> m_supportProxyVersionDetail;
                    bool m_supportProxyVersionDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESUPPORTPROXYVERSIONRESPONSE_H_
