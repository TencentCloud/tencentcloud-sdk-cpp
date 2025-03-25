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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBETRIALFEATURERESPONSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBETRIALFEATURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/Feature.h>
#include <tencentcloud/vcube/v20220410/model/XMagicTrial.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeTrialFeature返回参数结构体
                */
                class DescribeTrialFeatureResponse : public AbstractModel
                {
                public:
                    DescribeTrialFeatureResponse();
                    ~DescribeTrialFeatureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取功能列表
                     * @return FeatureList 功能列表
                     * 
                     */
                    std::vector<Feature> GetFeatureList() const;

                    /**
                     * 判断参数 FeatureList 是否已赋值
                     * @return FeatureList 是否已赋值
                     * 
                     */
                    bool FeatureListHasBeenSet() const;

                    /**
                     * 获取可以开通的优图测试功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return XMagicTrial 可以开通的优图测试功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    XMagicTrial GetXMagicTrial() const;

                    /**
                     * 判断参数 XMagicTrial 是否已赋值
                     * @return XMagicTrial 是否已赋值
                     * 
                     */
                    bool XMagicTrialHasBeenSet() const;

                    /**
                     * 获取可以开通的优图测试功能列表
                     * @return XMagicTrialList 可以开通的优图测试功能列表
                     * 
                     */
                    std::vector<XMagicTrial> GetXMagicTrialList() const;

                    /**
                     * 判断参数 XMagicTrialList 是否已赋值
                     * @return XMagicTrialList 是否已赋值
                     * 
                     */
                    bool XMagicTrialListHasBeenSet() const;

                private:

                    /**
                     * 功能列表
                     */
                    std::vector<Feature> m_featureList;
                    bool m_featureListHasBeenSet;

                    /**
                     * 可以开通的优图测试功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    XMagicTrial m_xMagicTrial;
                    bool m_xMagicTrialHasBeenSet;

                    /**
                     * 可以开通的优图测试功能列表
                     */
                    std::vector<XMagicTrial> m_xMagicTrialList;
                    bool m_xMagicTrialListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBETRIALFEATURERESPONSE_H_
