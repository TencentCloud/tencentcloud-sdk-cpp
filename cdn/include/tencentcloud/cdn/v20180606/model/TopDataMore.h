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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_TOPDATAMORE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_TOPDATAMORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/TopDetailDataMore.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 排序类型数据结构
                */
                class TopDataMore : public AbstractModel
                {
                public:
                    TopDataMore();
                    ~TopDataMore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源名称，根据查询条件不同分为以下几类：
                     * @return Resource 资源名称，根据查询条件不同分为以下几类：
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置资源名称，根据查询条件不同分为以下几类：
                     * @param _resource 资源名称，根据查询条件不同分为以下几类：
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取排序结果详情
                     * @return DetailData 排序结果详情
                     * 
                     */
                    std::vector<TopDetailDataMore> GetDetailData() const;

                    /**
                     * 设置排序结果详情
                     * @param _detailData 排序结果详情
                     * 
                     */
                    void SetDetailData(const std::vector<TopDetailDataMore>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     * 
                     */
                    bool DetailDataHasBeenSet() const;

                private:

                    /**
                     * 资源名称，根据查询条件不同分为以下几类：
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 排序结果详情
                     */
                    std::vector<TopDetailDataMore> m_detailData;
                    bool m_detailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_TOPDATAMORE_H_
