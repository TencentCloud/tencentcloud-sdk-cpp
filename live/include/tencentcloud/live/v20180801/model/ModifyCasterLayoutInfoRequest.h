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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERLAYOUTINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERLAYOUTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CasterLayoutInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyCasterLayoutInfo请求参数结构体
                */
                class ModifyCasterLayoutInfoRequest : public AbstractModel
                {
                public:
                    ModifyCasterLayoutInfoRequest();
                    ~ModifyCasterLayoutInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导播台ID。</p>
                     * @return CasterId <p>导播台ID。</p>
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置<p>导播台ID。</p>
                     * @param _casterId <p>导播台ID。</p>
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
                     * 获取<p>导播台布局参数信息。</p>
                     * @return LayoutInfo <p>导播台布局参数信息。</p>
                     * 
                     */
                    CasterLayoutInfo GetLayoutInfo() const;

                    /**
                     * 设置<p>导播台布局参数信息。</p>
                     * @param _layoutInfo <p>导播台布局参数信息。</p>
                     * 
                     */
                    void SetLayoutInfo(const CasterLayoutInfo& _layoutInfo);

                    /**
                     * 判断参数 LayoutInfo 是否已赋值
                     * @return LayoutInfo 是否已赋值
                     * 
                     */
                    bool LayoutInfoHasBeenSet() const;

                private:

                    /**
                     * <p>导播台ID。</p>
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * <p>导播台布局参数信息。</p>
                     */
                    CasterLayoutInfo m_layoutInfo;
                    bool m_layoutInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERLAYOUTINFOREQUEST_H_
