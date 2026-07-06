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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELSITEREGION_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELSITEREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 模型上线的站点、地域信息
                */
                class ModelSiteRegion : public AbstractModel
                {
                public:
                    ModelSiteRegion();
                    ~ModelSiteRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点标识。取值：domestic（国内站）、international（国际站）。
                     * @return Site 站点标识。取值：domestic（国内站）、international（国际站）。
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置站点标识。取值：domestic（国内站）、international（国际站）。
                     * @param _site 站点标识。取值：domestic（国内站）、international（国际站）。
                     * 
                     */
                    void SetSite(const std::string& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     * 
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取该站点下可用的地域列表，遵循腾讯云标准地域编码（如 ap-guangzhou、ap-beijing、ap-singapore、na-siliconvalley 等）。为空数组时表示该站点无可用地域。
                     * @return Regions 该站点下可用的地域列表，遵循腾讯云标准地域编码（如 ap-guangzhou、ap-beijing、ap-singapore、na-siliconvalley 等）。为空数组时表示该站点无可用地域。
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置该站点下可用的地域列表，遵循腾讯云标准地域编码（如 ap-guangzhou、ap-beijing、ap-singapore、na-siliconvalley 等）。为空数组时表示该站点无可用地域。
                     * @param _regions 该站点下可用的地域列表，遵循腾讯云标准地域编码（如 ap-guangzhou、ap-beijing、ap-singapore、na-siliconvalley 等）。为空数组时表示该站点无可用地域。
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * 站点标识。取值：domestic（国内站）、international（国际站）。
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 该站点下可用的地域列表，遵循腾讯云标准地域编码（如 ap-guangzhou、ap-beijing、ap-singapore、na-siliconvalley 等）。为空数组时表示该站点无可用地域。
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELSITEREGION_H_
