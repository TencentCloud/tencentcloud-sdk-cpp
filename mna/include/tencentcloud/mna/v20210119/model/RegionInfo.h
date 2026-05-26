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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 此数据结构用来展示可用地域信息。
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>地域 ID。</p>
                     * @return RegionId <p>地域 ID。</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域 ID。</p>
                     * @param _regionId <p>地域 ID。</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>地域名称。</p>
                     * @return RegionName <p>地域名称。</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域名称。</p>
                     * @param _regionName <p>地域名称。</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>地域英文缩写。</p>
                     * @return RegionAbbr <p>地域英文缩写。</p>
                     * 
                     */
                    std::string GetRegionAbbr() const;

                    /**
                     * 设置<p>地域英文缩写。</p>
                     * @param _regionAbbr <p>地域英文缩写。</p>
                     * 
                     */
                    void SetRegionAbbr(const std::string& _regionAbbr);

                    /**
                     * 判断参数 RegionAbbr 是否已赋值
                     * @return RegionAbbr 是否已赋值
                     * 
                     */
                    bool RegionAbbrHasBeenSet() const;

                private:

                    /**
                     * <p>地域 ID。</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>地域名称。</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>地域英文缩写。</p>
                     */
                    std::string m_regionAbbr;
                    bool m_regionAbbrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_REGIONINFO_H_
