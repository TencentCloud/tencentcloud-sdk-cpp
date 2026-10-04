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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FETCHOPTION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FETCHOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 数据获取选项，用于get/list请求中控制响应返回哪些额外内容
                */
                class FetchOption : public AbstractModel
                {
                public:
                    FetchOption();
                    ~FetchOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否在响应中返回权限列表，默认false</p>
                     * @return FetchPermissions <p>是否在响应中返回权限列表，默认false</p>
                     * 
                     */
                    bool GetFetchPermissions() const;

                    /**
                     * 设置<p>是否在响应中返回权限列表，默认false</p>
                     * @param _fetchPermissions <p>是否在响应中返回权限列表，默认false</p>
                     * 
                     */
                    void SetFetchPermissions(const bool& _fetchPermissions);

                    /**
                     * 判断参数 FetchPermissions 是否已赋值
                     * @return FetchPermissions 是否已赋值
                     * 
                     */
                    bool FetchPermissionsHasBeenSet() const;

                    /**
                     * 获取<p>是否获取特征表详情，当AssetType为TABLE时有效</p>
                     * @return FetchFeatureTableDetail <p>是否获取特征表详情，当AssetType为TABLE时有效</p>
                     * 
                     */
                    bool GetFetchFeatureTableDetail() const;

                    /**
                     * 设置<p>是否获取特征表详情，当AssetType为TABLE时有效</p>
                     * @param _fetchFeatureTableDetail <p>是否获取特征表详情，当AssetType为TABLE时有效</p>
                     * 
                     */
                    void SetFetchFeatureTableDetail(const bool& _fetchFeatureTableDetail);

                    /**
                     * 判断参数 FetchFeatureTableDetail 是否已赋值
                     * @return FetchFeatureTableDetail 是否已赋值
                     * 
                     */
                    bool FetchFeatureTableDetailHasBeenSet() const;

                    /**
                     * 获取<p>按权限过滤，传入权限列表，仅返回当前用户拥有指定权限的实体。例如传入[&quot;SELECT_TABLE&quot;]则仅返回当前用户有SELECT_TABLE权限的实体。只对list接口生效，为空时不进行权限过滤</p>
                     * @return FilterPermissions <p>按权限过滤，传入权限列表，仅返回当前用户拥有指定权限的实体。例如传入[&quot;SELECT_TABLE&quot;]则仅返回当前用户有SELECT_TABLE权限的实体。只对list接口生效，为空时不进行权限过滤</p>
                     * 
                     */
                    std::vector<std::string> GetFilterPermissions() const;

                    /**
                     * 设置<p>按权限过滤，传入权限列表，仅返回当前用户拥有指定权限的实体。例如传入[&quot;SELECT_TABLE&quot;]则仅返回当前用户有SELECT_TABLE权限的实体。只对list接口生效，为空时不进行权限过滤</p>
                     * @param _filterPermissions <p>按权限过滤，传入权限列表，仅返回当前用户拥有指定权限的实体。例如传入[&quot;SELECT_TABLE&quot;]则仅返回当前用户有SELECT_TABLE权限的实体。只对list接口生效，为空时不进行权限过滤</p>
                     * 
                     */
                    void SetFilterPermissions(const std::vector<std::string>& _filterPermissions);

                    /**
                     * 判断参数 FilterPermissions 是否已赋值
                     * @return FilterPermissions 是否已赋值
                     * 
                     */
                    bool FilterPermissionsHasBeenSet() const;

                    /**
                     * 获取<p>是否在响应中返回负责人信息。不传或为true时返回负责人信息（默认返回），显式传false时不返回</p>
                     * @return FetchOwners <p>是否在响应中返回负责人信息。不传或为true时返回负责人信息（默认返回），显式传false时不返回</p>
                     * 
                     */
                    bool GetFetchOwners() const;

                    /**
                     * 设置<p>是否在响应中返回负责人信息。不传或为true时返回负责人信息（默认返回），显式传false时不返回</p>
                     * @param _fetchOwners <p>是否在响应中返回负责人信息。不传或为true时返回负责人信息（默认返回），显式传false时不返回</p>
                     * 
                     */
                    void SetFetchOwners(const bool& _fetchOwners);

                    /**
                     * 判断参数 FetchOwners 是否已赋值
                     * @return FetchOwners 是否已赋值
                     * 
                     */
                    bool FetchOwnersHasBeenSet() const;

                    /**
                     * 获取<p>是否将用户Uin转换为用户名(userName)。影响范围：Audit中的CreatorName/LastModifierName、MetaOwner中的OwnerName。不传或为true时执行转换（默认转换），显式传false时不转换</p>
                     * @return FetchUserInfo <p>是否将用户Uin转换为用户名(userName)。影响范围：Audit中的CreatorName/LastModifierName、MetaOwner中的OwnerName。不传或为true时执行转换（默认转换），显式传false时不转换</p>
                     * 
                     */
                    bool GetFetchUserInfo() const;

                    /**
                     * 设置<p>是否将用户Uin转换为用户名(userName)。影响范围：Audit中的CreatorName/LastModifierName、MetaOwner中的OwnerName。不传或为true时执行转换（默认转换），显式传false时不转换</p>
                     * @param _fetchUserInfo <p>是否将用户Uin转换为用户名(userName)。影响范围：Audit中的CreatorName/LastModifierName、MetaOwner中的OwnerName。不传或为true时执行转换（默认转换），显式传false时不转换</p>
                     * 
                     */
                    void SetFetchUserInfo(const bool& _fetchUserInfo);

                    /**
                     * 判断参数 FetchUserInfo 是否已赋值
                     * @return FetchUserInfo 是否已赋值
                     * 
                     */
                    bool FetchUserInfoHasBeenSet() const;

                    /**
                     * 获取<p>是否返回字段脱敏策略信息，默认不返回，传true则会查询表字段对应的字段脱敏策略信息</p>
                     * @return FetchMask <p>是否返回字段脱敏策略信息，默认不返回，传true则会查询表字段对应的字段脱敏策略信息</p>
                     * 
                     */
                    bool GetFetchMask() const;

                    /**
                     * 设置<p>是否返回字段脱敏策略信息，默认不返回，传true则会查询表字段对应的字段脱敏策略信息</p>
                     * @param _fetchMask <p>是否返回字段脱敏策略信息，默认不返回，传true则会查询表字段对应的字段脱敏策略信息</p>
                     * 
                     */
                    void SetFetchMask(const bool& _fetchMask);

                    /**
                     * 判断参数 FetchMask 是否已赋值
                     * @return FetchMask 是否已赋值
                     * 
                     */
                    bool FetchMaskHasBeenSet() const;

                    /**
                     * 获取<p>是否返回标签信息，默认不返回。传true时，GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels等接口会在对应实体中返回标签（Tags）字段</p>
                     * @return FetchTags <p>是否返回标签信息，默认不返回。传true时，GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels等接口会在对应实体中返回标签（Tags）字段</p>
                     * 
                     */
                    bool GetFetchTags() const;

                    /**
                     * 设置<p>是否返回标签信息，默认不返回。传true时，GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels等接口会在对应实体中返回标签（Tags）字段</p>
                     * @param _fetchTags <p>是否返回标签信息，默认不返回。传true时，GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels等接口会在对应实体中返回标签（Tags）字段</p>
                     * 
                     */
                    void SetFetchTags(const bool& _fetchTags);

                    /**
                     * 判断参数 FetchTags 是否已赋值
                     * @return FetchTags 是否已赋值
                     * 
                     */
                    bool FetchTagsHasBeenSet() const;

                    /**
                     * 获取<p>是否返回字段关联的字典维度信息，默认不传，不返回</p>
                     * @return FetchDimensions <p>是否返回字段关联的字典维度信息，默认不传，不返回</p>
                     * 
                     */
                    bool GetFetchDimensions() const;

                    /**
                     * 设置<p>是否返回字段关联的字典维度信息，默认不传，不返回</p>
                     * @param _fetchDimensions <p>是否返回字段关联的字典维度信息，默认不传，不返回</p>
                     * 
                     */
                    void SetFetchDimensions(const bool& _fetchDimensions);

                    /**
                     * 判断参数 FetchDimensions 是否已赋值
                     * @return FetchDimensions 是否已赋值
                     * 
                     */
                    bool FetchDimensionsHasBeenSet() const;

                private:

                    /**
                     * <p>是否在响应中返回权限列表，默认false</p>
                     */
                    bool m_fetchPermissions;
                    bool m_fetchPermissionsHasBeenSet;

                    /**
                     * <p>是否获取特征表详情，当AssetType为TABLE时有效</p>
                     */
                    bool m_fetchFeatureTableDetail;
                    bool m_fetchFeatureTableDetailHasBeenSet;

                    /**
                     * <p>按权限过滤，传入权限列表，仅返回当前用户拥有指定权限的实体。例如传入[&quot;SELECT_TABLE&quot;]则仅返回当前用户有SELECT_TABLE权限的实体。只对list接口生效，为空时不进行权限过滤</p>
                     */
                    std::vector<std::string> m_filterPermissions;
                    bool m_filterPermissionsHasBeenSet;

                    /**
                     * <p>是否在响应中返回负责人信息。不传或为true时返回负责人信息（默认返回），显式传false时不返回</p>
                     */
                    bool m_fetchOwners;
                    bool m_fetchOwnersHasBeenSet;

                    /**
                     * <p>是否将用户Uin转换为用户名(userName)。影响范围：Audit中的CreatorName/LastModifierName、MetaOwner中的OwnerName。不传或为true时执行转换（默认转换），显式传false时不转换</p>
                     */
                    bool m_fetchUserInfo;
                    bool m_fetchUserInfoHasBeenSet;

                    /**
                     * <p>是否返回字段脱敏策略信息，默认不返回，传true则会查询表字段对应的字段脱敏策略信息</p>
                     */
                    bool m_fetchMask;
                    bool m_fetchMaskHasBeenSet;

                    /**
                     * <p>是否返回标签信息，默认不返回。传true时，GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels等接口会在对应实体中返回标签（Tags）字段</p>
                     */
                    bool m_fetchTags;
                    bool m_fetchTagsHasBeenSet;

                    /**
                     * <p>是否返回字段关联的字典维度信息，默认不传，不返回</p>
                     */
                    bool m_fetchDimensions;
                    bool m_fetchDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FETCHOPTION_H_
