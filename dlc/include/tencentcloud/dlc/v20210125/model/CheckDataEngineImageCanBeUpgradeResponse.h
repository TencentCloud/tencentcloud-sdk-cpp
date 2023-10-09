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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEUPGRADERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEUPGRADERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckDataEngineImageCanBeUpgrade返回参数结构体
                */
                class CheckDataEngineImageCanBeUpgradeResponse : public AbstractModel
                {
                public:
                    CheckDataEngineImageCanBeUpgradeResponse();
                    ~CheckDataEngineImageCanBeUpgradeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前大版本下，可升级的集群镜像小版本id
                     * @return ChildImageVersionId 当前大版本下，可升级的集群镜像小版本id
                     * 
                     */
                    std::string GetChildImageVersionId() const;

                    /**
                     * 判断参数 ChildImageVersionId 是否已赋值
                     * @return ChildImageVersionId 是否已赋值
                     * 
                     */
                    bool ChildImageVersionIdHasBeenSet() const;

                    /**
                     * 获取是否能够升级
                     * @return IsUpgrade 是否能够升级
                     * 
                     */
                    bool GetIsUpgrade() const;

                    /**
                     * 判断参数 IsUpgrade 是否已赋值
                     * @return IsUpgrade 是否已赋值
                     * 
                     */
                    bool IsUpgradeHasBeenSet() const;

                private:

                    /**
                     * 当前大版本下，可升级的集群镜像小版本id
                     */
                    std::string m_childImageVersionId;
                    bool m_childImageVersionIdHasBeenSet;

                    /**
                     * 是否能够升级
                     */
                    bool m_isUpgrade;
                    bool m_isUpgradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEUPGRADERESPONSE_H_
