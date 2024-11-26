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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTERLAYOUTINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTERLAYOUTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteCasterLayoutInfo请求参数结构体
                */
                class DeleteCasterLayoutInfoRequest : public AbstractModel
                {
                public:
                    DeleteCasterLayoutInfoRequest();
                    ~DeleteCasterLayoutInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导播台ID。
                     * @return CasterId 导播台ID。
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置导播台ID。
                     * @param _casterId 导播台ID。
                     * 
                     */
                    void SetCasterId(const uint64_t& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                    /**
                     * 获取要删除的布局Index。
注：待删除的Index对应的布局需存在。
                     * @return LayoutIndex 要删除的布局Index。
注：待删除的Index对应的布局需存在。
                     * 
                     */
                    uint64_t GetLayoutIndex() const;

                    /**
                     * 设置要删除的布局Index。
注：待删除的Index对应的布局需存在。
                     * @param _layoutIndex 要删除的布局Index。
注：待删除的Index对应的布局需存在。
                     * 
                     */
                    void SetLayoutIndex(const uint64_t& _layoutIndex);

                    /**
                     * 判断参数 LayoutIndex 是否已赋值
                     * @return LayoutIndex 是否已赋值
                     * 
                     */
                    bool LayoutIndexHasBeenSet() const;

                private:

                    /**
                     * 导播台ID。
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 要删除的布局Index。
注：待删除的Index对应的布局需存在。
                     */
                    uint64_t m_layoutIndex;
                    bool m_layoutIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTERLAYOUTINFOREQUEST_H_
