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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 容灾组信息
                */
                class DisasterRecoverGroup : public AbstractModel
                {
                public:
                    DisasterRecoverGroup();
                    ~DisasterRecoverGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分散置放群组id。
                     * @return DisasterRecoverGroupId 分散置放群组id。
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置分散置放群组id。
                     * @param _disasterRecoverGroupId 分散置放群组id。
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取分散置放群组名称，长度1-60个字符。
                     * @return Name 分散置放群组名称，长度1-60个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分散置放群组名称，长度1-60个字符。
                     * @param _name 分散置放群组名称，长度1-60个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分散置放群组类型，取值范围：<br>
<li>HOST：物理机<br></li>
<li>SW：交换机<br></li>
<li>RACK：机架</li>
                     * @return Type 分散置放群组类型，取值范围：<br>
<li>HOST：物理机<br></li>
<li>SW：交换机<br></li>
<li>RACK：机架</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置分散置放群组类型，取值范围：<br>
<li>HOST：物理机<br></li>
<li>SW：交换机<br></li>
<li>RACK：机架</li>
                     * @param _type 分散置放群组类型，取值范围：<br>
<li>HOST：物理机<br></li>
<li>SW：交换机<br></li>
<li>RACK：机架</li>
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
                     * 获取分散置放群组内最大容纳云服务器数量。
                     * @return CvmQuotaTotal 分散置放群组内最大容纳云服务器数量。
                     * 
                     */
                    int64_t GetCvmQuotaTotal() const;

                    /**
                     * 设置分散置放群组内最大容纳云服务器数量。
                     * @param _cvmQuotaTotal 分散置放群组内最大容纳云服务器数量。
                     * 
                     */
                    void SetCvmQuotaTotal(const int64_t& _cvmQuotaTotal);

                    /**
                     * 判断参数 CvmQuotaTotal 是否已赋值
                     * @return CvmQuotaTotal 是否已赋值
                     * 
                     */
                    bool CvmQuotaTotalHasBeenSet() const;

                    /**
                     * 获取分散置放群组内云服务器当前数量。
                     * @return CurrentNum 分散置放群组内云服务器当前数量。
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置分散置放群组内云服务器当前数量。
                     * @param _currentNum 分散置放群组内云服务器当前数量。
                     * 
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取分散置放群组内，云服务器id列表。
                     * @return InstanceIds 分散置放群组内，云服务器id列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置分散置放群组内，云服务器id列表。
                     * @param _instanceIds 分散置放群组内，云服务器id列表。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取分散置放群组创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return CreateTime 分散置放群组创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置分散置放群组创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param _createTime 分散置放群组创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取置放群组亲和度
                     * @return Affinity 置放群组亲和度
                     * 
                     */
                    int64_t GetAffinity() const;

                    /**
                     * 设置置放群组亲和度
                     * @param _affinity 置放群组亲和度
                     * 
                     */
                    void SetAffinity(const int64_t& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取置放群组关联的标签列表。
                     * @return Tags 置放群组关联的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置置放群组关联的标签列表。
                     * @param _tags 置放群组关联的标签列表。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 分散置放群组id。
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * 分散置放群组名称，长度1-60个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分散置放群组类型，取值范围：<br>
<li>HOST：物理机<br></li>
<li>SW：交换机<br></li>
<li>RACK：机架</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分散置放群组内最大容纳云服务器数量。
                     */
                    int64_t m_cvmQuotaTotal;
                    bool m_cvmQuotaTotalHasBeenSet;

                    /**
                     * 分散置放群组内云服务器当前数量。
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * 分散置放群组内，云服务器id列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 分散置放群组创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 置放群组亲和度
                     */
                    int64_t m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * 置放群组关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
