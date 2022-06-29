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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITYISSUERRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITYISSUERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetAuthorityIssuer返回参数结构体
                */
                class GetAuthorityIssuerResponse : public AbstractModel
                {
                public:
                    GetAuthorityIssuerResponse();
                    ~GetAuthorityIssuerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取名称
                     * @return Name 名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取区块链网络id
                     * @return ClusterId 区块链网络id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取区块链群组id
                     * @return GroupId 区块链群组id
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取权威机构did
                     * @return Did 权威机构did
                     */
                    std::string GetDid() const;

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取机构备注信息
                     * @return Remark 机构备注信息
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取注册时间
                     * @return RegisterTime 注册时间
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取认证时间
                     * @return RecognizeTime 认证时间
                     */
                    std::string GetRecognizeTime() const;

                    /**
                     * 判断参数 RecognizeTime 是否已赋值
                     * @return RecognizeTime 是否已赋值
                     */
                    bool RecognizeTimeHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 区块链网络id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 区块链群组id
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 权威机构did
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 机构备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 注册时间
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * 认证时间
                     */
                    std::string m_recognizeTime;
                    bool m_recognizeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITYISSUERRESPONSE_H_
