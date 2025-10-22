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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateMultiPathGatewayLine返回参数结构体
                */
                class CreateMultiPathGatewayLineResponse : public AbstractModel
                {
                public:
                    CreateMultiPathGatewayLineResponse();
                    ~CreateMultiPathGatewayLineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取线路 ID ， 取值有:
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     * @return LineId 线路 ID ， 取值有:
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                private:

                    /**
                     * 线路 ID ， 取值有:
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINERESPONSE_H_
