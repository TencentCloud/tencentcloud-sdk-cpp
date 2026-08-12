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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CREDITPOINT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CREDITPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 账号积分
                */
                class CreditPoint : public AbstractModel
                {
                public:
                    CreditPoint();
                    ~CreditPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>积分分值</p>
                     * @return Point <p>积分分值</p>
                     * 
                     */
                    double GetPoint() const;

                    /**
                     * 设置<p>积分分值</p>
                     * @param _point <p>积分分值</p>
                     * 
                     */
                    void SetPoint(const double& _point);

                    /**
                     * 判断参数 Point 是否已赋值
                     * @return Point 是否已赋值
                     * 
                     */
                    bool PointHasBeenSet() const;

                    /**
                     * 获取<p>积分类型</p>
                     * @return PointType <p>积分类型</p>
                     * 
                     */
                    std::string GetPointType() const;

                    /**
                     * 设置<p>积分类型</p>
                     * @param _pointType <p>积分类型</p>
                     * 
                     */
                    void SetPointType(const std::string& _pointType);

                    /**
                     * 判断参数 PointType 是否已赋值
                     * @return PointType 是否已赋值
                     * 
                     */
                    bool PointTypeHasBeenSet() const;

                private:

                    /**
                     * <p>积分分值</p>
                     */
                    double m_point;
                    bool m_pointHasBeenSet;

                    /**
                     * <p>积分类型</p>
                     */
                    std::string m_pointType;
                    bool m_pointTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CREDITPOINT_H_
