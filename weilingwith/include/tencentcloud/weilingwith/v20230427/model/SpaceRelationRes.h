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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACERELATIONRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACERELATIONRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/SpaceRelation.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 空间层级关系响应体
                */
                class SpaceRelationRes : public AbstractModel
                {
                public:
                    SpaceRelationRes();
                    ~SpaceRelationRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取空间层级关系
                     * @return SpaceRelation 空间层级关系
                     * 
                     */
                    SpaceRelation GetSpaceRelation() const;

                    /**
                     * 设置空间层级关系
                     * @param _spaceRelation 空间层级关系
                     * 
                     */
                    void SetSpaceRelation(const SpaceRelation& _spaceRelation);

                    /**
                     * 判断参数 SpaceRelation 是否已赋值
                     * @return SpaceRelation 是否已赋值
                     * 
                     */
                    bool SpaceRelationHasBeenSet() const;

                private:

                    /**
                     * 空间层级关系
                     */
                    SpaceRelation m_spaceRelation;
                    bool m_spaceRelationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACERELATIONRES_H_
