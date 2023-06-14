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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERRISKITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERRISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClusterCheckItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 风险项是检查完之后，有问题的检测项，并且加了一些检查结果信息。
                */
                class ClusterRiskItem : public AbstractModel
                {
                public:
                    ClusterRiskItem();
                    ~ClusterRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测项相关信息
                     * @return CheckItem 检测项相关信息
                     * 
                     */
                    ClusterCheckItem GetCheckItem() const;

                    /**
                     * 设置检测项相关信息
                     * @param _checkItem 检测项相关信息
                     * 
                     */
                    void SetCheckItem(const ClusterCheckItem& _checkItem);

                    /**
                     * 判断参数 CheckItem 是否已赋值
                     * @return CheckItem 是否已赋值
                     * 
                     */
                    bool CheckItemHasBeenSet() const;

                    /**
                     * 获取验证信息
                     * @return VerifyInfo 验证信息
                     * 
                     */
                    std::string GetVerifyInfo() const;

                    /**
                     * 设置验证信息
                     * @param _verifyInfo 验证信息
                     * 
                     */
                    void SetVerifyInfo(const std::string& _verifyInfo);

                    /**
                     * 判断参数 VerifyInfo 是否已赋值
                     * @return VerifyInfo 是否已赋值
                     * 
                     */
                    bool VerifyInfoHasBeenSet() const;

                    /**
                     * 获取事件描述,检查的错误信息
                     * @return ErrorMessage 事件描述,检查的错误信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置事件描述,检查的错误信息
                     * @param _errorMessage 事件描述,检查的错误信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取受影响的集群数量
                     * @return AffectedClusterCount 受影响的集群数量
                     * 
                     */
                    uint64_t GetAffectedClusterCount() const;

                    /**
                     * 设置受影响的集群数量
                     * @param _affectedClusterCount 受影响的集群数量
                     * 
                     */
                    void SetAffectedClusterCount(const uint64_t& _affectedClusterCount);

                    /**
                     * 判断参数 AffectedClusterCount 是否已赋值
                     * @return AffectedClusterCount 是否已赋值
                     * 
                     */
                    bool AffectedClusterCountHasBeenSet() const;

                    /**
                     * 获取受影响的节点数量
                     * @return AffectedNodeCount 受影响的节点数量
                     * 
                     */
                    uint64_t GetAffectedNodeCount() const;

                    /**
                     * 设置受影响的节点数量
                     * @param _affectedNodeCount 受影响的节点数量
                     * 
                     */
                    void SetAffectedNodeCount(const uint64_t& _affectedNodeCount);

                    /**
                     * 判断参数 AffectedNodeCount 是否已赋值
                     * @return AffectedNodeCount 是否已赋值
                     * 
                     */
                    bool AffectedNodeCountHasBeenSet() const;

                private:

                    /**
                     * 检测项相关信息
                     */
                    ClusterCheckItem m_checkItem;
                    bool m_checkItemHasBeenSet;

                    /**
                     * 验证信息
                     */
                    std::string m_verifyInfo;
                    bool m_verifyInfoHasBeenSet;

                    /**
                     * 事件描述,检查的错误信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 受影响的集群数量
                     */
                    uint64_t m_affectedClusterCount;
                    bool m_affectedClusterCountHasBeenSet;

                    /**
                     * 受影响的节点数量
                     */
                    uint64_t m_affectedNodeCount;
                    bool m_affectedNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERRISKITEM_H_
