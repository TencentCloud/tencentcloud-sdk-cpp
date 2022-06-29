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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEENGINEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ApolloEnvParam.h>
#include <tencentcloud/tse/v20201207/model/InstanceTagInfo.h>
#include <tencentcloud/tse/v20201207/model/EngineAdmin.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateEngine请求参数结构体
                */
                class CreateEngineRequest : public AbstractModel
                {
                public:
                    CreateEngineRequest();
                    ~CreateEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎类型。参考值：
- zookeeper
- nacos
- consul
- apollo
- eureka
- polaris
                     * @return EngineType 引擎类型。参考值：
- zookeeper
- nacos
- consul
- apollo
- eureka
- polaris
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型。参考值：
- zookeeper
- nacos
- consul
- apollo
- eureka
- polaris
                     * @param EngineType 引擎类型。参考值：
- zookeeper
- nacos
- consul
- apollo
- eureka
- polaris
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取引擎的开源版本。每种引擎支持的开源版本不同，请参考产品文档或者控制台购买页
                     * @return EngineVersion 引擎的开源版本。每种引擎支持的开源版本不同，请参考产品文档或者控制台购买页
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎的开源版本。每种引擎支持的开源版本不同，请参考产品文档或者控制台购买页
                     * @param EngineVersion 引擎的开源版本。每种引擎支持的开源版本不同，请参考产品文档或者控制台购买页
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取引擎的产品版本。参考值：
- STANDARD： 标准版

引擎各版本及可选择的规格、节点数说明：
apollo - STANDARD版本
规格列表：spec-qcr53kf1t（1C2G）,spec-qdr53kf2w（2C4G）
节点数：1，2，3，4，5

eureka - STANDARD版本
规格列表：spec-qvj6k7t4q（1C2G）,spec-qcr53kfjt（2C4G）,spec-qvj6k7t4m（4G8G）,spec-qcr54kfjt（8C16G）,spec-qcr55kfjt（16C32G）
节点数：3，4，5
                     * @return EngineProductVersion 引擎的产品版本。参考值：
- STANDARD： 标准版

引擎各版本及可选择的规格、节点数说明：
apollo - STANDARD版本
规格列表：spec-qcr53kf1t（1C2G）,spec-qdr53kf2w（2C4G）
节点数：1，2，3，4，5

eureka - STANDARD版本
规格列表：spec-qvj6k7t4q（1C2G）,spec-qcr53kfjt（2C4G）,spec-qvj6k7t4m（4G8G）,spec-qcr54kfjt（8C16G）,spec-qcr55kfjt（16C32G）
节点数：3，4，5
                     */
                    std::string GetEngineProductVersion() const;

                    /**
                     * 设置引擎的产品版本。参考值：
- STANDARD： 标准版

引擎各版本及可选择的规格、节点数说明：
apollo - STANDARD版本
规格列表：spec-qcr53kf1t（1C2G）,spec-qdr53kf2w（2C4G）
节点数：1，2，3，4，5

eureka - STANDARD版本
规格列表：spec-qvj6k7t4q（1C2G）,spec-qcr53kfjt（2C4G）,spec-qvj6k7t4m（4G8G）,spec-qcr54kfjt（8C16G）,spec-qcr55kfjt（16C32G）
节点数：3，4，5
                     * @param EngineProductVersion 引擎的产品版本。参考值：
- STANDARD： 标准版

引擎各版本及可选择的规格、节点数说明：
apollo - STANDARD版本
规格列表：spec-qcr53kf1t（1C2G）,spec-qdr53kf2w（2C4G）
节点数：1，2，3，4，5

eureka - STANDARD版本
规格列表：spec-qvj6k7t4q（1C2G）,spec-qcr53kfjt（2C4G）,spec-qvj6k7t4m（4G8G）,spec-qcr54kfjt（8C16G）,spec-qcr55kfjt（16C32G）
节点数：3，4，5
                     */
                    void SetEngineProductVersion(const std::string& _engineProductVersion);

                    /**
                     * 判断参数 EngineProductVersion 是否已赋值
                     * @return EngineProductVersion 是否已赋值
                     */
                    bool EngineProductVersionHasBeenSet() const;

                    /**
                     * 获取引擎所在地域。参考值说明：
中国区 参考值：
- ap-guangzhou：广州
- ap-beijing：北京
- ap-chengdu：成都
- ap-chongqing：重庆
- ap-nanjing：南京
- ap-shanghai：上海
- ap-hongkong：香港
- ap-taipei：台北
亚太区 参考值：
- ap-jakarta：雅加达
- ap-singapore：新加坡
北美区 参考值
- na-toronto：多伦多
金融专区 参考值
- ap-beijing-fsi：北京金融
- ap-shanghai-fsi：上海金融
- ap-shenzhen-fsi：深圳金融
                     * @return EngineRegion 引擎所在地域。参考值说明：
中国区 参考值：
- ap-guangzhou：广州
- ap-beijing：北京
- ap-chengdu：成都
- ap-chongqing：重庆
- ap-nanjing：南京
- ap-shanghai：上海
- ap-hongkong：香港
- ap-taipei：台北
亚太区 参考值：
- ap-jakarta：雅加达
- ap-singapore：新加坡
北美区 参考值
- na-toronto：多伦多
金融专区 参考值
- ap-beijing-fsi：北京金融
- ap-shanghai-fsi：上海金融
- ap-shenzhen-fsi：深圳金融
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置引擎所在地域。参考值说明：
中国区 参考值：
- ap-guangzhou：广州
- ap-beijing：北京
- ap-chengdu：成都
- ap-chongqing：重庆
- ap-nanjing：南京
- ap-shanghai：上海
- ap-hongkong：香港
- ap-taipei：台北
亚太区 参考值：
- ap-jakarta：雅加达
- ap-singapore：新加坡
北美区 参考值
- na-toronto：多伦多
金融专区 参考值
- ap-beijing-fsi：北京金融
- ap-shanghai-fsi：上海金融
- ap-shenzhen-fsi：深圳金融
                     * @param EngineRegion 引擎所在地域。参考值说明：
中国区 参考值：
- ap-guangzhou：广州
- ap-beijing：北京
- ap-chengdu：成都
- ap-chongqing：重庆
- ap-nanjing：南京
- ap-shanghai：上海
- ap-hongkong：香港
- ap-taipei：台北
亚太区 参考值：
- ap-jakarta：雅加达
- ap-singapore：新加坡
北美区 参考值
- na-toronto：多伦多
金融专区 参考值
- ap-beijing-fsi：北京金融
- ap-shanghai-fsi：上海金融
- ap-shenzhen-fsi：深圳金融
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取引擎名称。参考值：
- eurek-test
                     * @return EngineName 引擎名称。参考值：
- eurek-test
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置引擎名称。参考值：
- eurek-test
                     * @param EngineName 引擎名称。参考值：
- eurek-test
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取付费类型。参考值：
- 0：后付费
- 1：预付费
                     * @return TradeType 付费类型。参考值：
- 0：后付费
- 1：预付费
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置付费类型。参考值：
- 0：后付费
- 1：预付费
                     * @param TradeType 付费类型。参考值：
- 0：后付费
- 1：预付费
                     */
                    void SetTradeType(const int64_t& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取引擎的节点规格 ID。参见EngineProductVersion字段说明
                     * @return EngineResourceSpec 引擎的节点规格 ID。参见EngineProductVersion字段说明
                     */
                    std::string GetEngineResourceSpec() const;

                    /**
                     * 设置引擎的节点规格 ID。参见EngineProductVersion字段说明
                     * @param EngineResourceSpec 引擎的节点规格 ID。参见EngineProductVersion字段说明
                     */
                    void SetEngineResourceSpec(const std::string& _engineResourceSpec);

                    /**
                     * 判断参数 EngineResourceSpec 是否已赋值
                     * @return EngineResourceSpec 是否已赋值
                     */
                    bool EngineResourceSpecHasBeenSet() const;

                    /**
                     * 获取引擎的节点数量。参见EngineProductVersion字段说明
                     * @return EngineNodeNum 引擎的节点数量。参见EngineProductVersion字段说明
                     */
                    int64_t GetEngineNodeNum() const;

                    /**
                     * 设置引擎的节点数量。参见EngineProductVersion字段说明
                     * @param EngineNodeNum 引擎的节点数量。参见EngineProductVersion字段说明
                     */
                    void SetEngineNodeNum(const int64_t& _engineNodeNum);

                    /**
                     * 判断参数 EngineNodeNum 是否已赋值
                     * @return EngineNodeNum 是否已赋值
                     */
                    bool EngineNodeNumHasBeenSet() const;

                    /**
                     * 获取VPC ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- vpc-conz6aix
                     * @return VpcId VPC ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- vpc-conz6aix
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- vpc-conz6aix
                     * @param VpcId VPC ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- vpc-conz6aix
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网 ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- subnet-ahde9me9
                     * @return SubnetId 子网 ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- subnet-ahde9me9
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- subnet-ahde9me9
                     * @param SubnetId 子网 ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- subnet-ahde9me9
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Apollo 环境配置参数列表。参数说明：
如果创建Apollo类型，此参数为必填的环境信息列表，最多可选4个环境。环境信息参数说明：
- Name：环境名。参考值：prod, dev, fat, uat
- EngineResourceSpec：环境内引擎的节点规格ID。参见EngineProductVersion参数说明
- EngineNodeNum：环境内引擎的节点数量。参见EngineProductVersion参数说明，其中prod环境支持的节点数为2，3，4，5
- StorageCapacity：配置存储空间大小，以GB为单位，步长为5.参考值：35
- VpcId：VPC ID。参考值：vpc-conz6aix
- SubnetId：子网 ID。参考值：subnet-ahde9me9
                     * @return ApolloEnvParams Apollo 环境配置参数列表。参数说明：
如果创建Apollo类型，此参数为必填的环境信息列表，最多可选4个环境。环境信息参数说明：
- Name：环境名。参考值：prod, dev, fat, uat
- EngineResourceSpec：环境内引擎的节点规格ID。参见EngineProductVersion参数说明
- EngineNodeNum：环境内引擎的节点数量。参见EngineProductVersion参数说明，其中prod环境支持的节点数为2，3，4，5
- StorageCapacity：配置存储空间大小，以GB为单位，步长为5.参考值：35
- VpcId：VPC ID。参考值：vpc-conz6aix
- SubnetId：子网 ID。参考值：subnet-ahde9me9
                     */
                    std::vector<ApolloEnvParam> GetApolloEnvParams() const;

                    /**
                     * 设置Apollo 环境配置参数列表。参数说明：
如果创建Apollo类型，此参数为必填的环境信息列表，最多可选4个环境。环境信息参数说明：
- Name：环境名。参考值：prod, dev, fat, uat
- EngineResourceSpec：环境内引擎的节点规格ID。参见EngineProductVersion参数说明
- EngineNodeNum：环境内引擎的节点数量。参见EngineProductVersion参数说明，其中prod环境支持的节点数为2，3，4，5
- StorageCapacity：配置存储空间大小，以GB为单位，步长为5.参考值：35
- VpcId：VPC ID。参考值：vpc-conz6aix
- SubnetId：子网 ID。参考值：subnet-ahde9me9
                     * @param ApolloEnvParams Apollo 环境配置参数列表。参数说明：
如果创建Apollo类型，此参数为必填的环境信息列表，最多可选4个环境。环境信息参数说明：
- Name：环境名。参考值：prod, dev, fat, uat
- EngineResourceSpec：环境内引擎的节点规格ID。参见EngineProductVersion参数说明
- EngineNodeNum：环境内引擎的节点数量。参见EngineProductVersion参数说明，其中prod环境支持的节点数为2，3，4，5
- StorageCapacity：配置存储空间大小，以GB为单位，步长为5.参考值：35
- VpcId：VPC ID。参考值：vpc-conz6aix
- SubnetId：子网 ID。参考值：subnet-ahde9me9
                     */
                    void SetApolloEnvParams(const std::vector<ApolloEnvParam>& _apolloEnvParams);

                    /**
                     * 判断参数 ApolloEnvParams 是否已赋值
                     * @return ApolloEnvParams 是否已赋值
                     */
                    bool ApolloEnvParamsHasBeenSet() const;

                    /**
                     * 获取引擎的标签列表。用户自定义的key/value形式，无参考值
                     * @return EngineTags 引擎的标签列表。用户自定义的key/value形式，无参考值
                     */
                    std::vector<InstanceTagInfo> GetEngineTags() const;

                    /**
                     * 设置引擎的标签列表。用户自定义的key/value形式，无参考值
                     * @param EngineTags 引擎的标签列表。用户自定义的key/value形式，无参考值
                     */
                    void SetEngineTags(const std::vector<InstanceTagInfo>& _engineTags);

                    /**
                     * 判断参数 EngineTags 是否已赋值
                     * @return EngineTags 是否已赋值
                     */
                    bool EngineTagsHasBeenSet() const;

                    /**
                     * 获取引擎的初始帐号信息。可设置参数：
- Name：控制台初始用户名
- Password：控制台初始密码
- Token：引擎接口的管理员 Token
                     * @return EngineAdmin 引擎的初始帐号信息。可设置参数：
- Name：控制台初始用户名
- Password：控制台初始密码
- Token：引擎接口的管理员 Token
                     */
                    EngineAdmin GetEngineAdmin() const;

                    /**
                     * 设置引擎的初始帐号信息。可设置参数：
- Name：控制台初始用户名
- Password：控制台初始密码
- Token：引擎接口的管理员 Token
                     * @param EngineAdmin 引擎的初始帐号信息。可设置参数：
- Name：控制台初始用户名
- Password：控制台初始密码
- Token：引擎接口的管理员 Token
                     */
                    void SetEngineAdmin(const EngineAdmin& _engineAdmin);

                    /**
                     * 判断参数 EngineAdmin 是否已赋值
                     * @return EngineAdmin 是否已赋值
                     */
                    bool EngineAdminHasBeenSet() const;

                    /**
                     * 获取预付费时长，以月为单位
                     * @return PrepaidPeriod 预付费时长，以月为单位
                     */
                    int64_t GetPrepaidPeriod() const;

                    /**
                     * 设置预付费时长，以月为单位
                     * @param PrepaidPeriod 预付费时长，以月为单位
                     */
                    void SetPrepaidPeriod(const int64_t& _prepaidPeriod);

                    /**
                     * 判断参数 PrepaidPeriod 是否已赋值
                     * @return PrepaidPeriod 是否已赋值
                     */
                    bool PrepaidPeriodHasBeenSet() const;

                    /**
                     * 获取自动续费标记，仅预付费使用。参考值：
- 0：不自动续费
- 1：自动续费
                     * @return PrepaidRenewFlag 自动续费标记，仅预付费使用。参考值：
- 0：不自动续费
- 1：自动续费
                     */
                    int64_t GetPrepaidRenewFlag() const;

                    /**
                     * 设置自动续费标记，仅预付费使用。参考值：
- 0：不自动续费
- 1：自动续费
                     * @param PrepaidRenewFlag 自动续费标记，仅预付费使用。参考值：
- 0：不自动续费
- 1：自动续费
                     */
                    void SetPrepaidRenewFlag(const int64_t& _prepaidRenewFlag);

                    /**
                     * 判断参数 PrepaidRenewFlag 是否已赋值
                     * @return PrepaidRenewFlag 是否已赋值
                     */
                    bool PrepaidRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 引擎类型。参考值：
- zookeeper
- nacos
- consul
- apollo
- eureka
- polaris
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 引擎的开源版本。每种引擎支持的开源版本不同，请参考产品文档或者控制台购买页
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 引擎的产品版本。参考值：
- STANDARD： 标准版

引擎各版本及可选择的规格、节点数说明：
apollo - STANDARD版本
规格列表：spec-qcr53kf1t（1C2G）,spec-qdr53kf2w（2C4G）
节点数：1，2，3，4，5

eureka - STANDARD版本
规格列表：spec-qvj6k7t4q（1C2G）,spec-qcr53kfjt（2C4G）,spec-qvj6k7t4m（4G8G）,spec-qcr54kfjt（8C16G）,spec-qcr55kfjt（16C32G）
节点数：3，4，5
                     */
                    std::string m_engineProductVersion;
                    bool m_engineProductVersionHasBeenSet;

                    /**
                     * 引擎所在地域。参考值说明：
中国区 参考值：
- ap-guangzhou：广州
- ap-beijing：北京
- ap-chengdu：成都
- ap-chongqing：重庆
- ap-nanjing：南京
- ap-shanghai：上海
- ap-hongkong：香港
- ap-taipei：台北
亚太区 参考值：
- ap-jakarta：雅加达
- ap-singapore：新加坡
北美区 参考值
- na-toronto：多伦多
金融专区 参考值
- ap-beijing-fsi：北京金融
- ap-shanghai-fsi：上海金融
- ap-shenzhen-fsi：深圳金融
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * 引擎名称。参考值：
- eurek-test
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 付费类型。参考值：
- 0：后付费
- 1：预付费
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * 引擎的节点规格 ID。参见EngineProductVersion字段说明
                     */
                    std::string m_engineResourceSpec;
                    bool m_engineResourceSpecHasBeenSet;

                    /**
                     * 引擎的节点数量。参见EngineProductVersion字段说明
                     */
                    int64_t m_engineNodeNum;
                    bool m_engineNodeNumHasBeenSet;

                    /**
                     * VPC ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- vpc-conz6aix
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID。在 VPC 的子网内分配一个 IP 作为引擎的访问地址。参考值：
- subnet-ahde9me9
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Apollo 环境配置参数列表。参数说明：
如果创建Apollo类型，此参数为必填的环境信息列表，最多可选4个环境。环境信息参数说明：
- Name：环境名。参考值：prod, dev, fat, uat
- EngineResourceSpec：环境内引擎的节点规格ID。参见EngineProductVersion参数说明
- EngineNodeNum：环境内引擎的节点数量。参见EngineProductVersion参数说明，其中prod环境支持的节点数为2，3，4，5
- StorageCapacity：配置存储空间大小，以GB为单位，步长为5.参考值：35
- VpcId：VPC ID。参考值：vpc-conz6aix
- SubnetId：子网 ID。参考值：subnet-ahde9me9
                     */
                    std::vector<ApolloEnvParam> m_apolloEnvParams;
                    bool m_apolloEnvParamsHasBeenSet;

                    /**
                     * 引擎的标签列表。用户自定义的key/value形式，无参考值
                     */
                    std::vector<InstanceTagInfo> m_engineTags;
                    bool m_engineTagsHasBeenSet;

                    /**
                     * 引擎的初始帐号信息。可设置参数：
- Name：控制台初始用户名
- Password：控制台初始密码
- Token：引擎接口的管理员 Token
                     */
                    EngineAdmin m_engineAdmin;
                    bool m_engineAdminHasBeenSet;

                    /**
                     * 预付费时长，以月为单位
                     */
                    int64_t m_prepaidPeriod;
                    bool m_prepaidPeriodHasBeenSet;

                    /**
                     * 自动续费标记，仅预付费使用。参考值：
- 0：不自动续费
- 1：自动续费
                     */
                    int64_t m_prepaidRenewFlag;
                    bool m_prepaidRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEENGINEREQUEST_H_
