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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDEVICERELATIONRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDEVICERELATIONRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/SpaceDeviceRelation.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备-空间绑定关系响应体
                */
                class SpaceDeviceRelationRes : public AbstractModel
                {
                public:
                    SpaceDeviceRelationRes();
                    ~SpaceDeviceRelationRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备空间绑定关系列表
                     * @return SpaceDeviceRelationList 设备空间绑定关系列表
                     * 
                     */
                    std::vector<SpaceDeviceRelation> GetSpaceDeviceRelationList() const;

                    /**
                     * 设置设备空间绑定关系列表
                     * @param _spaceDeviceRelationList 设备空间绑定关系列表
                     * 
                     */
                    void SetSpaceDeviceRelationList(const std::vector<SpaceDeviceRelation>& _spaceDeviceRelationList);

                    /**
                     * 判断参数 SpaceDeviceRelationList 是否已赋值
                     * @return SpaceDeviceRelationList 是否已赋值
                     * 
                     */
                    bool SpaceDeviceRelationListHasBeenSet() const;

                private:

                    /**
                     * 设备空间绑定关系列表
                     */
                    std::vector<SpaceDeviceRelation> m_spaceDeviceRelationList;
                    bool m_spaceDeviceRelationListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEDEVICERELATIONRES_H_
