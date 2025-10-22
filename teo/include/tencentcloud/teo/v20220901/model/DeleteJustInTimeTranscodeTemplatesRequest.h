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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_

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
                * DeleteJustInTimeTranscodeTemplates请求参数结构体
                */
                class DeleteJustInTimeTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DeleteJustInTimeTranscodeTemplatesRequest();
                    ~DeleteJustInTimeTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取需删除的即时转码模板唯一标识数组，长度限制：100。
                     * @return TemplateIds 需删除的即时转码模板唯一标识数组，长度限制：100。
                     * 
                     */
                    std::vector<std::string> GetTemplateIds() const;

                    /**
                     * 设置需删除的即时转码模板唯一标识数组，长度限制：100。
                     * @param _templateIds 需删除的即时转码模板唯一标识数组，长度限制：100。
                     * 
                     */
                    void SetTemplateIds(const std::vector<std::string>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 需删除的即时转码模板唯一标识数组，长度限制：100。
                     */
                    std::vector<std::string> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEJUSTINTIMETRANSCODETEMPLATESREQUEST_H_
