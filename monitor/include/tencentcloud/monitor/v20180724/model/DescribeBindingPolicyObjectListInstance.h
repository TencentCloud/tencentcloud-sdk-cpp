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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 查询策略绑定对象列表接口返回的对象实例信息
                */
                class DescribeBindingPolicyObjectListInstance : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListInstance();
                    ~DescribeBindingPolicyObjectListInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象唯一id
                     * @return UniqueId 对象唯一id
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置对象唯一id
                     * @param _uniqueId 对象唯一id
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取表示对象实例的维度集合，jsonObj字符串
                     * @return Dimensions 表示对象实例的维度集合，jsonObj字符串
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置表示对象实例的维度集合，jsonObj字符串
                     * @param _dimensions 表示对象实例的维度集合，jsonObj字符串
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取对象是否被屏蔽，0表示未屏蔽，1表示被屏蔽
                     * @return IsShielded 对象是否被屏蔽，0表示未屏蔽，1表示被屏蔽
                     * 
                     */
                    int64_t GetIsShielded() const;

                    /**
                     * 设置对象是否被屏蔽，0表示未屏蔽，1表示被屏蔽
                     * @param _isShielded 对象是否被屏蔽，0表示未屏蔽，1表示被屏蔽
                     * 
                     */
                    void SetIsShielded(const int64_t& _isShielded);

                    /**
                     * 判断参数 IsShielded 是否已赋值
                     * @return IsShielded 是否已赋值
                     * 
                     */
                    bool IsShieldedHasBeenSet() const;

                    /**
                     * 获取对象所在的地域
                     * @return Region 对象所在的地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置对象所在的地域
                     * @param _region 对象所在的地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 对象唯一id
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * 表示对象实例的维度集合，jsonObj字符串
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 对象是否被屏蔽，0表示未屏蔽，1表示被屏蔽
                     */
                    int64_t m_isShielded;
                    bool m_isShieldedHasBeenSet;

                    /**
                     * 对象所在的地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCE_H_
