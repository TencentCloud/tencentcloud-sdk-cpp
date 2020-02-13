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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_ISPDETAIL_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_ISPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 运营商可用率
                */
                class IspDetail : public AbstractModel
                {
                public:
                    IspDetail();
                    ~IspDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商名称
                     * @return IspName 运营商名称
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置运营商名称
                     * @param IspName 运营商名称
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取可用率
                     * @return AvailRatio 可用率
                     */
                    double GetAvailRatio() const;

                    /**
                     * 设置可用率
                     * @param AvailRatio 可用率
                     */
                    void SetAvailRatio(const double& _availRatio);

                    /**
                     * 判断参数 AvailRatio 是否已赋值
                     * @return AvailRatio 是否已赋值
                     */
                    bool AvailRatioHasBeenSet() const;

                    /**
                     * 获取平均耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgTime 平均耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetAvgTime() const;

                    /**
                     * 设置平均耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AvgTime 平均耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvgTime(const double& _avgTime);

                    /**
                     * 判断参数 AvgTime 是否已赋值
                     * @return AvgTime 是否已赋值
                     */
                    bool AvgTimeHasBeenSet() const;

                private:

                    /**
                     * 运营商名称
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 可用率
                     */
                    double m_availRatio;
                    bool m_availRatioHasBeenSet;

                    /**
                     * 平均耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_avgTime;
                    bool m_avgTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_ISPDETAIL_H_
