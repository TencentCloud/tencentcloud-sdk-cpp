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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACETYPE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 空间分类
                */
                class SpaceType : public AbstractModel
                {
                public:
                    SpaceType();
                    ~SpaceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取空间分类编码
                     * @return SpaceTypeCode 空间分类编码
                     * 
                     */
                    std::string GetSpaceTypeCode() const;

                    /**
                     * 设置空间分类编码
                     * @param _spaceTypeCode 空间分类编码
                     * 
                     */
                    void SetSpaceTypeCode(const std::string& _spaceTypeCode);

                    /**
                     * 判断参数 SpaceTypeCode 是否已赋值
                     * @return SpaceTypeCode 是否已赋值
                     * 
                     */
                    bool SpaceTypeCodeHasBeenSet() const;

                    /**
                     * 获取空间分类名称
                     * @return SpaceTypeName 空间分类名称
                     * 
                     */
                    std::string GetSpaceTypeName() const;

                    /**
                     * 设置空间分类名称
                     * @param _spaceTypeName 空间分类名称
                     * 
                     */
                    void SetSpaceTypeName(const std::string& _spaceTypeName);

                    /**
                     * 判断参数 SpaceTypeName 是否已赋值
                     * @return SpaceTypeName 是否已赋值
                     * 
                     */
                    bool SpaceTypeNameHasBeenSet() const;

                private:

                    /**
                     * 空间分类编码
                     */
                    std::string m_spaceTypeCode;
                    bool m_spaceTypeCodeHasBeenSet;

                    /**
                     * 空间分类名称
                     */
                    std::string m_spaceTypeName;
                    bool m_spaceTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACETYPE_H_
