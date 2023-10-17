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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_SEARCHKBCOMPONENTRESPONSE_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_SEARCHKBCOMPONENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/Component.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * SearchKBComponent返回参数结构体
                */
                class SearchKBComponentResponse : public AbstractModel
                {
                public:
                    SearchKBComponentResponse();
                    ~SearchKBComponentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取满足搜索条件的组件列表
                     * @return ComponentList 满足搜索条件的组件列表
                     * 
                     */
                    std::vector<Component> GetComponentList() const;

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     * 
                     */
                    bool ComponentListHasBeenSet() const;

                    /**
                     * 获取满足搜索条件的总个数
                     * @return Total 满足搜索条件的总个数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 满足搜索条件的组件列表
                     */
                    std::vector<Component> m_componentList;
                    bool m_componentListHasBeenSet;

                    /**
                     * 满足搜索条件的总个数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_SEARCHKBCOMPONENTRESPONSE_H_
