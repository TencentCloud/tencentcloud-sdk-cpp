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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETPOSITIONSPACELISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETPOSITIONSPACELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/PositionSpaceInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetPositionSpaceList返回参数结构体
                */
                class GetPositionSpaceListResponse : public AbstractModel
                {
                public:
                    GetPositionSpaceListResponse();
                    ~GetPositionSpaceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取位置空间列表
                     * @return List 位置空间列表
                     * 
                     */
                    std::vector<PositionSpaceInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取位置空间数量
                     * @return Total 位置空间数量
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
                     * 位置空间列表
                     */
                    std::vector<PositionSpaceInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 位置空间数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETPOSITIONSPACELISTRESPONSE_H_
