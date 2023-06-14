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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/BindInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 拉取某个用户的所有资源信息
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户购买的资源id，全局唯一
                     * @return ResourceId 用户购买的资源id，全局唯一
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置用户购买的资源id，全局唯一
                     * @param _resourceId 用户购买的资源id，全局唯一
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源的pid，MTP加固-12767，应用加固-12750 MTP反作弊-12766 源代码混淆-12736
                     * @return Pid 资源的pid，MTP加固-12767，应用加固-12750 MTP反作弊-12766 源代码混淆-12736
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置资源的pid，MTP加固-12767，应用加固-12750 MTP反作弊-12766 源代码混淆-12736
                     * @param _pid 资源的pid，MTP加固-12767，应用加固-12750 MTP反作弊-12766 源代码混淆-12736
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取购买时间戳
                     * @return CreateTime 购买时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置购买时间戳
                     * @param _createTime 购买时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取到期时间戳
                     * @return ExpireTime 到期时间戳
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置到期时间戳
                     * @param _expireTime 到期时间戳
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取0-未绑定，1-已绑定
                     * @return IsBind 0-未绑定，1-已绑定
                     * 
                     */
                    int64_t GetIsBind() const;

                    /**
                     * 设置0-未绑定，1-已绑定
                     * @param _isBind 0-未绑定，1-已绑定
                     * 
                     */
                    void SetIsBind(const int64_t& _isBind);

                    /**
                     * 判断参数 IsBind 是否已赋值
                     * @return IsBind 是否已赋值
                     * 
                     */
                    bool IsBindHasBeenSet() const;

                    /**
                     * 获取用户绑定app的基本信息
                     * @return BindInfo 用户绑定app的基本信息
                     * 
                     */
                    BindInfo GetBindInfo() const;

                    /**
                     * 设置用户绑定app的基本信息
                     * @param _bindInfo 用户绑定app的基本信息
                     * 
                     */
                    void SetBindInfo(const BindInfo& _bindInfo);

                    /**
                     * 判断参数 BindInfo 是否已赋值
                     * @return BindInfo 是否已赋值
                     * 
                     */
                    bool BindInfoHasBeenSet() const;

                    /**
                     * 获取资源名称，如应用加固，漏洞扫描
                     * @return ResourceName 资源名称，如应用加固，漏洞扫描
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称，如应用加固，漏洞扫描
                     * @param _resourceName 资源名称，如应用加固，漏洞扫描
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * 用户购买的资源id，全局唯一
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源的pid，MTP加固-12767，应用加固-12750 MTP反作弊-12766 源代码混淆-12736
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 购买时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 到期时间戳
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 0-未绑定，1-已绑定
                     */
                    int64_t m_isBind;
                    bool m_isBindHasBeenSet;

                    /**
                     * 用户绑定app的基本信息
                     */
                    BindInfo m_bindInfo;
                    bool m_bindInfoHasBeenSet;

                    /**
                     * 资源名称，如应用加固，漏洞扫描
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_RESOURCEINFO_H_
