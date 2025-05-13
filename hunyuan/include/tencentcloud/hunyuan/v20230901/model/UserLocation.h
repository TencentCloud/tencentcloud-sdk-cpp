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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USERLOCATION_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USERLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Approximate.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 用户位置详细信息
                */
                class UserLocation : public AbstractModel
                {
                public:
                    UserLocation();
                    ~UserLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示位置类型
                     * @return Type 表示位置类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表示位置类型
                     * @param _type 表示位置类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取用户近似位置的详细信息
                     * @return Approximate 用户近似位置的详细信息
                     * 
                     */
                    Approximate GetApproximate() const;

                    /**
                     * 设置用户近似位置的详细信息
                     * @param _approximate 用户近似位置的详细信息
                     * 
                     */
                    void SetApproximate(const Approximate& _approximate);

                    /**
                     * 判断参数 Approximate 是否已赋值
                     * @return Approximate 是否已赋值
                     * 
                     */
                    bool ApproximateHasBeenSet() const;

                private:

                    /**
                     * 表示位置类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用户近似位置的详细信息
                     */
                    Approximate m_approximate;
                    bool m_approximateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USERLOCATION_H_
