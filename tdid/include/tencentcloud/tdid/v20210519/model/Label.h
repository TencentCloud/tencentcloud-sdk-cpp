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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_LABEL_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_LABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 标签
                */
                class Label : public AbstractModel
                {
                public:
                    Label();
                    ~Label() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签ID
                     * @return LabelId 标签ID
                     */
                    uint64_t GetLabelId() const;

                    /**
                     * 设置标签ID
                     * @param LabelId 标签ID
                     */
                    void SetLabelId(const uint64_t& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取标签名称
                     * @return LabelName 标签名称
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名称
                     * @param LabelName 标签名称
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取did数量
                     * @return DidCount did数量
                     */
                    int64_t GetDidCount() const;

                    /**
                     * 设置did数量
                     * @param DidCount did数量
                     */
                    void SetDidCount(const int64_t& _didCount);

                    /**
                     * 判断参数 DidCount 是否已赋值
                     * @return DidCount 是否已赋值
                     */
                    bool DidCountHasBeenSet() const;

                    /**
                     * 获取创建者did
                     * @return Did 创建者did
                     */
                    std::string GetDid() const;

                    /**
                     * 设置创建者did
                     * @param Did 创建者did
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param GroupId 群组ID
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 标签ID
                     */
                    uint64_t m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * did数量
                     */
                    int64_t m_didCount;
                    bool m_didCountHasBeenSet;

                    /**
                     * 创建者did
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 群组ID
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_LABEL_H_
