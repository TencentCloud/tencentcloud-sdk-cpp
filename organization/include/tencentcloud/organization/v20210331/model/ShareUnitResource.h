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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITRESOURCE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 共享单元资源
                */
                class ShareUnitResource : public AbstractModel
                {
                public:
                    ShareUnitResource();
                    ~ShareUnitResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享资源ID。
                     * @return ResourceId 共享资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置共享资源ID。
                     * @param _resourceId 共享资源ID。
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
                     * 获取共享资源类型。
                     * @return Type 共享资源类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置共享资源类型。
                     * @param _type 共享资源类型。
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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取产品资源ID。
                     * @return ProductResourceId 产品资源ID。
                     * 
                     */
                    std::string GetProductResourceId() const;

                    /**
                     * 设置产品资源ID。
                     * @param _productResourceId 产品资源ID。
                     * 
                     */
                    void SetProductResourceId(const std::string& _productResourceId);

                    /**
                     * 判断参数 ProductResourceId 是否已赋值
                     * @return ProductResourceId 是否已赋值
                     * 
                     */
                    bool ProductResourceIdHasBeenSet() const;

                    /**
                     * 获取共享单元成员数。
                     * @return SharedMemberNum 共享单元成员数。
                     * 
                     */
                    uint64_t GetSharedMemberNum() const;

                    /**
                     * 设置共享单元成员数。
                     * @param _sharedMemberNum 共享单元成员数。
                     * 
                     */
                    void SetSharedMemberNum(const uint64_t& _sharedMemberNum);

                    /**
                     * 判断参数 SharedMemberNum 是否已赋值
                     * @return SharedMemberNum 是否已赋值
                     * 
                     */
                    bool SharedMemberNumHasBeenSet() const;

                    /**
                     * 获取使用中共享单元成员数。
                     * @return SharedMemberUseNum 使用中共享单元成员数。
                     * 
                     */
                    uint64_t GetSharedMemberUseNum() const;

                    /**
                     * 设置使用中共享单元成员数。
                     * @param _sharedMemberUseNum 使用中共享单元成员数。
                     * 
                     */
                    void SetSharedMemberUseNum(const uint64_t& _sharedMemberUseNum);

                    /**
                     * 判断参数 SharedMemberUseNum 是否已赋值
                     * @return SharedMemberUseNum 是否已赋值
                     * 
                     */
                    bool SharedMemberUseNumHasBeenSet() const;

                    /**
                     * 获取共享管理员OwnerUin。
                     * @return ShareManagerUin 共享管理员OwnerUin。
                     * 
                     */
                    int64_t GetShareManagerUin() const;

                    /**
                     * 设置共享管理员OwnerUin。
                     * @param _shareManagerUin 共享管理员OwnerUin。
                     * 
                     */
                    void SetShareManagerUin(const int64_t& _shareManagerUin);

                    /**
                     * 判断参数 ShareManagerUin 是否已赋值
                     * @return ShareManagerUin 是否已赋值
                     * 
                     */
                    bool ShareManagerUinHasBeenSet() const;

                private:

                    /**
                     * 共享资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 共享资源类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 产品资源ID。
                     */
                    std::string m_productResourceId;
                    bool m_productResourceIdHasBeenSet;

                    /**
                     * 共享单元成员数。
                     */
                    uint64_t m_sharedMemberNum;
                    bool m_sharedMemberNumHasBeenSet;

                    /**
                     * 使用中共享单元成员数。
                     */
                    uint64_t m_sharedMemberUseNum;
                    bool m_sharedMemberUseNumHasBeenSet;

                    /**
                     * 共享管理员OwnerUin。
                     */
                    int64_t m_shareManagerUin;
                    bool m_shareManagerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITRESOURCE_H_
