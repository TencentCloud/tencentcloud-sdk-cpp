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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECITYWORKSPACELISTRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECITYWORKSPACELISTRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/WorkspaceInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 通过城市id查询工作空间列表
                */
                class DescribeCityWorkspaceListRes : public AbstractModel
                {
                public:
                    DescribeCityWorkspaceListRes();
                    ~DescribeCityWorkspaceListRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通过城市id查询工作空间列表结果
                     * @return WorkspaceSet 通过城市id查询工作空间列表结果
                     * 
                     */
                    std::vector<WorkspaceInfo> GetWorkspaceSet() const;

                    /**
                     * 设置通过城市id查询工作空间列表结果
                     * @param _workspaceSet 通过城市id查询工作空间列表结果
                     * 
                     */
                    void SetWorkspaceSet(const std::vector<WorkspaceInfo>& _workspaceSet);

                    /**
                     * 判断参数 WorkspaceSet 是否已赋值
                     * @return WorkspaceSet 是否已赋值
                     * 
                     */
                    bool WorkspaceSetHasBeenSet() const;

                private:

                    /**
                     * 通过城市id查询工作空间列表结果
                     */
                    std::vector<WorkspaceInfo> m_workspaceSet;
                    bool m_workspaceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECITYWORKSPACELISTRES_H_
