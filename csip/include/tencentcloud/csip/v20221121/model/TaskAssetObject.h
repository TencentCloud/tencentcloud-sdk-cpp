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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKASSETOBJECT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKASSETOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 任务资产项
                */
                class TaskAssetObject : public AbstractModel
                {
                public:
                    TaskAssetObject();
                    ~TaskAssetObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return InstanceType 资产类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置资产类型
                     * @param _instanceType 资产类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取资产分类
                     * @return AssetType 资产分类
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产分类
                     * @param _assetType 资产分类
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取ip/域名/资产id，数据库id等
                     * @return Asset ip/域名/资产id，数据库id等
                     * 
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置ip/域名/资产id，数据库id等
                     * @param _asset ip/域名/资产id，数据库id等
                     * 
                     */
                    void SetAsset(const std::string& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取多云资产唯一id
                     * @return Arn 多云资产唯一id
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 设置多云资产唯一id
                     * @param _arn 多云资产唯一id
                     * 
                     */
                    void SetArn(const std::string& _arn);

                    /**
                     * 判断参数 Arn 是否已赋值
                     * @return Arn 是否已赋值
                     * 
                     */
                    bool ArnHasBeenSet() const;

                private:

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 资产分类
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * ip/域名/资产id，数据库id等
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 多云资产唯一id
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKASSETOBJECT_H_
