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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_DESCRIBEMATERIALLISTRESPONSE_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_DESCRIBEMATERIALLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/PublicMaterialInfos.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * DescribeMaterialList返回参数结构体
                */
                class DescribeMaterialListResponse : public AbstractModel
                {
                public:
                    DescribeMaterialListResponse();
                    ~DescribeMaterialListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取素材列表数据
                     * @return MaterialInfos 素材列表数据
                     * 
                     */
                    std::vector<PublicMaterialInfos> GetMaterialInfos() const;

                    /**
                     * 判断参数 MaterialInfos 是否已赋值
                     * @return MaterialInfos 是否已赋值
                     * 
                     */
                    bool MaterialInfosHasBeenSet() const;

                    /**
                     * 获取素材条数
                     * @return Count 素材条数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 素材列表数据
                     */
                    std::vector<PublicMaterialInfos> m_materialInfos;
                    bool m_materialInfosHasBeenSet;

                    /**
                     * 素材条数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_DESCRIBEMATERIALLISTRESPONSE_H_
