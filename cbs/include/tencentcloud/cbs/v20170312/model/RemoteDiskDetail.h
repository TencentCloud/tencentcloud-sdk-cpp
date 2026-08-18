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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_REMOTEDISKDETAIL_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_REMOTEDISKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 单副本SSD硬盘详情。
                */
                class RemoteDiskDetail : public AbstractModel
                {
                public:
                    RemoteDiskDetail();
                    ~RemoteDiskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>单副本SSD硬盘所在的位置。</p>
                     * @return Placement <p>单副本SSD硬盘所在的位置。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>单副本SSD硬盘所在的位置。</p>
                     * @param _placement <p>单副本SSD硬盘所在的位置。</p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                private:

                    /**
                     * <p>单副本SSD硬盘所在的位置。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_REMOTEDISKDETAIL_H_
