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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateProject请求参数结构体
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称(不为空且最长为 200)
                     * @return Name 应用名称(不为空且最长为 200)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称(不为空且最长为 200)
                     * @param _name 应用名称(不为空且最长为 200)
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
                     * 获取业务系统 ID
                     * @return InstanceID 业务系统 ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置业务系统 ID
                     * @param _instanceID 业务系统 ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取项目抽样率(大于等于 0)
                     * @return Rate 项目抽样率(大于等于 0)
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置项目抽样率(大于等于 0)
                     * @param _rate 项目抽样率(大于等于 0)
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取是否开启聚类
                     * @return EnableURLGroup 是否开启聚类
                     * 
                     */
                    uint64_t GetEnableURLGroup() const;

                    /**
                     * 设置是否开启聚类
                     * @param _enableURLGroup 是否开启聚类
                     * 
                     */
                    void SetEnableURLGroup(const uint64_t& _enableURLGroup);

                    /**
                     * 判断参数 EnableURLGroup 是否已赋值
                     * @return EnableURLGroup 是否已赋值
                     * 
                     */
                    bool EnableURLGroupHasBeenSet() const;

                    /**
                     * 获取项目类型("web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * @return Type 项目类型("web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置项目类型("web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * @param _type 项目类型("web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
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
                     * 获取项目对应仓库地址(可选，最长为 256)
                     * @return Repo 项目对应仓库地址(可选，最长为 256)
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置项目对应仓库地址(可选，最长为 256)
                     * @param _repo 项目对应仓库地址(可选，最长为 256)
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取项目对应网页地址(可选，最长为 256)
                     * @return URL 项目对应网页地址(可选，最长为 256)
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置项目对应网页地址(可选，最长为 256)
                     * @param _uRL 项目对应网页地址(可选，最长为 256)
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取应用描述(可选，最长为 1000)
                     * @return Desc 应用描述(可选，最长为 1000)
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置应用描述(可选，最长为 1000)
                     * @param _desc 应用描述(可选，最长为 1000)
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 应用名称(不为空且最长为 200)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 业务系统 ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 项目抽样率(大于等于 0)
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 是否开启聚类
                     */
                    uint64_t m_enableURLGroup;
                    bool m_enableURLGroupHasBeenSet;

                    /**
                     * 项目类型("web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 项目对应仓库地址(可选，最长为 256)
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * 项目对应网页地址(可选，最长为 256)
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 应用描述(可选，最长为 1000)
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATEPROJECTREQUEST_H_
