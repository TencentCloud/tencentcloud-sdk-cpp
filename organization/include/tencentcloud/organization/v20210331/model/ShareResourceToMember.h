/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCETOMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCETOMEMBER_H_

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
                * 与我共享的资源
                */
                class ShareResourceToMember : public AbstractModel
                {
                public:
                    ShareResourceToMember();
                    ~ShareResourceToMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享单元资源ID。
                     * @return ResourceId 共享单元资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置共享单元资源ID。
                     * @param _resourceId 共享单元资源ID。
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
                     * 获取资源类型。
                     * @return Type 资源类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源类型。
                     * @param _type 资源类型。
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
                     * 获取共享单元ID。
                     * @return UnitId 共享单元ID。
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置共享单元ID。
                     * @param _unitId 共享单元ID。
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取共享单元名称。
                     * @return UnitName 共享单元名称。
                     * 
                     */
                    std::string GetUnitName() const;

                    /**
                     * 设置共享单元名称。
                     * @param _unitName 共享单元名称。
                     * 
                     */
                    void SetUnitName(const std::string& _unitName);

                    /**
                     * 判断参数 UnitName 是否已赋值
                     * @return UnitName 是否已赋值
                     * 
                     */
                    bool UnitNameHasBeenSet() const;

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
                     * 获取业务资源ID。
                     * @return ProductResourceId 业务资源ID。
                     * 
                     */
                    std::string GetProductResourceId() const;

                    /**
                     * 设置业务资源ID。
                     * @param _productResourceId 业务资源ID。
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
                     * 获取共享账号Uin。
                     * @return ShareManagerUin 共享账号Uin。
                     * 
                     */
                    int64_t GetShareManagerUin() const;

                    /**
                     * 设置共享账号Uin。
                     * @param _shareManagerUin 共享账号Uin。
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
                     * 共享单元资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 共享单元ID。
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * 共享单元名称。
                     */
                    std::string m_unitName;
                    bool m_unitNameHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 业务资源ID。
                     */
                    std::string m_productResourceId;
                    bool m_productResourceIdHasBeenSet;

                    /**
                     * 共享账号Uin。
                     */
                    int64_t m_shareManagerUin;
                    bool m_shareManagerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCETOMEMBER_H_
