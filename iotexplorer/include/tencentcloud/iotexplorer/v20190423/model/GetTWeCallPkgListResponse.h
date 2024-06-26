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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLPKGLISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLPKGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TWeCallPkgInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TWeCallCategoryPkgInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetTWeCallPkgList返回参数结构体
                */
                class GetTWeCallPkgListResponse : public AbstractModel
                {
                public:
                    GetTWeCallPkgListResponse();
                    ~GetTWeCallPkgListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取激活状态
                     * @return TWeCallPkgList 激活状态
                     * 
                     */
                    std::vector<TWeCallPkgInfo> GetTWeCallPkgList() const;

                    /**
                     * 判断参数 TWeCallPkgList 是否已赋值
                     * @return TWeCallPkgList 是否已赋值
                     * 
                     */
                    bool TWeCallPkgListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取分类统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TWeCallCategoryPkgList 分类统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TWeCallCategoryPkgInfo> GetTWeCallCategoryPkgList() const;

                    /**
                     * 判断参数 TWeCallCategoryPkgList 是否已赋值
                     * @return TWeCallCategoryPkgList 是否已赋值
                     * 
                     */
                    bool TWeCallCategoryPkgListHasBeenSet() const;

                private:

                    /**
                     * 激活状态
                     */
                    std::vector<TWeCallPkgInfo> m_tWeCallPkgList;
                    bool m_tWeCallPkgListHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 分类统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TWeCallCategoryPkgInfo> m_tWeCallCategoryPkgList;
                    bool m_tWeCallCategoryPkgListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLPKGLISTRESPONSE_H_
