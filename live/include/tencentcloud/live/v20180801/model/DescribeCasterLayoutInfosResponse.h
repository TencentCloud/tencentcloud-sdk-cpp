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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERLAYOUTINFOSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERLAYOUTINFOSRESPONSE_H_

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
                * DescribeCasterLayoutInfos返回参数结构体
                */
                class DescribeCasterLayoutInfosResponse : public AbstractModel
                {
                public:
                    DescribeCasterLayoutInfosResponse();
                    ~DescribeCasterLayoutInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导播台的布局列表。
                     * @return LayoutInfos 导播台的布局列表。
                     * 
                     */
                    std::vector<CasterLayoutInfo> GetLayoutInfos() const;

                    /**
                     * 判断参数 LayoutInfos 是否已赋值
                     * @return LayoutInfos 是否已赋值
                     * 
                     */
                    bool LayoutInfosHasBeenSet() const;

                private:

                    /**
                     * 导播台的布局列表。
                     */
                    std::vector<CasterLayoutInfo> m_layoutInfos;
                    bool m_layoutInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERLAYOUTINFOSRESPONSE_H_
