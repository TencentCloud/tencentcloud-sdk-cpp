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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_LISTMEDIARESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_LISTMEDIARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MaterialInfo.h>
#include <tencentcloud/cme/v20191029/model/ClassInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ListMedia返回参数结构体
                */
                class ListMediaResponse : public AbstractModel
                {
                public:
                    ListMediaResponse();
                    ~ListMediaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的媒体记录总数。
                     * @return MaterialTotalCount 符合条件的媒体记录总数。
                     * 
                     */
                    int64_t GetMaterialTotalCount() const;

                    /**
                     * 判断参数 MaterialTotalCount 是否已赋值
                     * @return MaterialTotalCount 是否已赋值
                     * 
                     */
                    bool MaterialTotalCountHasBeenSet() const;

                    /**
                     * 获取浏览分类路径下的媒体列表信息。
                     * @return MaterialInfoSet 浏览分类路径下的媒体列表信息。
                     * 
                     */
                    std::vector<MaterialInfo> GetMaterialInfoSet() const;

                    /**
                     * 判断参数 MaterialInfoSet 是否已赋值
                     * @return MaterialInfoSet 是否已赋值
                     * 
                     */
                    bool MaterialInfoSetHasBeenSet() const;

                    /**
                     * 获取浏览分类路径下的一级子类。
                     * @return ClassInfoSet 浏览分类路径下的一级子类。
                     * 
                     */
                    std::vector<ClassInfo> GetClassInfoSet() const;

                    /**
                     * 判断参数 ClassInfoSet 是否已赋值
                     * @return ClassInfoSet 是否已赋值
                     * 
                     */
                    bool ClassInfoSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的媒体记录总数。
                     */
                    int64_t m_materialTotalCount;
                    bool m_materialTotalCountHasBeenSet;

                    /**
                     * 浏览分类路径下的媒体列表信息。
                     */
                    std::vector<MaterialInfo> m_materialInfoSet;
                    bool m_materialInfoSetHasBeenSet;

                    /**
                     * 浏览分类路径下的一级子类。
                     */
                    std::vector<ClassInfo> m_classInfoSet;
                    bool m_classInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_LISTMEDIARESPONSE_H_
