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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestQueryString.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestCookie.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 回源请求参数配置参数。
                */
                class UpstreamRequestParameters : public AbstractModel
                {
                public:
                    UpstreamRequestParameters();
                    ~UpstreamRequestParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询字符串配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryString 查询字符串配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamRequestQueryString GetQueryString() const;

                    /**
                     * 设置查询字符串配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryString 查询字符串配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryString(const UpstreamRequestQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Cookie 配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cookie Cookie 配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamRequestCookie GetCookie() const;

                    /**
                     * 设置Cookie 配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cookie Cookie 配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCookie(const UpstreamRequestCookie& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * 查询字符串配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamRequestQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Cookie 配置。可选配置项，不填表示不配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamRequestCookie m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTPARAMETERS_H_
