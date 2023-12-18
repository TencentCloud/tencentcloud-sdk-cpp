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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 预执行脚本配置
                */
                class PreExecuteFileSettings : public AbstractModel
                {
                public:
                    PreExecuteFileSettings();
                    ~PreExecuteFileSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本在COS上路径，已废弃
                     * @return Path 脚本在COS上路径，已废弃
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置脚本在COS上路径，已废弃
                     * @param _path 脚本在COS上路径，已废弃
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取执行脚本参数
                     * @return Args 执行脚本参数
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置执行脚本参数
                     * @param _args 执行脚本参数
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取COS的Bucket名称，已废弃
                     * @return Bucket COS的Bucket名称，已废弃
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS的Bucket名称，已废弃
                     * @param _bucket COS的Bucket名称，已废弃
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS的Region名称，已废弃
                     * @return Region COS的Region名称，已废弃
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置COS的Region名称，已废弃
                     * @param _region COS的Region名称，已废弃
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
                     * 获取COS的Domain数据，已废弃
                     * @return Domain COS的Domain数据，已废弃
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置COS的Domain数据，已废弃
                     * @param _domain COS的Domain数据，已废弃
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取执行顺序
                     * @return RunOrder 执行顺序
                     * 
                     */
                    int64_t GetRunOrder() const;

                    /**
                     * 设置执行顺序
                     * @param _runOrder 执行顺序
                     * 
                     */
                    void SetRunOrder(const int64_t& _runOrder);

                    /**
                     * 判断参数 RunOrder 是否已赋值
                     * @return RunOrder 是否已赋值
                     * 
                     */
                    bool RunOrderHasBeenSet() const;

                    /**
                     * 获取resourceAfter 或 clusterAfter
                     * @return WhenRun resourceAfter 或 clusterAfter
                     * 
                     */
                    std::string GetWhenRun() const;

                    /**
                     * 设置resourceAfter 或 clusterAfter
                     * @param _whenRun resourceAfter 或 clusterAfter
                     * 
                     */
                    void SetWhenRun(const std::string& _whenRun);

                    /**
                     * 判断参数 WhenRun 是否已赋值
                     * @return WhenRun 是否已赋值
                     * 
                     */
                    bool WhenRunHasBeenSet() const;

                    /**
                     * 获取脚本文件名，已废弃
                     * @return CosFileName 脚本文件名，已废弃
                     * 
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置脚本文件名，已废弃
                     * @param _cosFileName 脚本文件名，已废弃
                     * 
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     * 
                     */
                    bool CosFileNameHasBeenSet() const;

                    /**
                     * 获取脚本的cos地址
                     * @return CosFileURI 脚本的cos地址
                     * 
                     */
                    std::string GetCosFileURI() const;

                    /**
                     * 设置脚本的cos地址
                     * @param _cosFileURI 脚本的cos地址
                     * 
                     */
                    void SetCosFileURI(const std::string& _cosFileURI);

                    /**
                     * 判断参数 CosFileURI 是否已赋值
                     * @return CosFileURI 是否已赋值
                     * 
                     */
                    bool CosFileURIHasBeenSet() const;

                    /**
                     * 获取cos的SecretId
                     * @return CosSecretId cos的SecretId
                     * 
                     */
                    std::string GetCosSecretId() const;

                    /**
                     * 设置cos的SecretId
                     * @param _cosSecretId cos的SecretId
                     * 
                     */
                    void SetCosSecretId(const std::string& _cosSecretId);

                    /**
                     * 判断参数 CosSecretId 是否已赋值
                     * @return CosSecretId 是否已赋值
                     * 
                     */
                    bool CosSecretIdHasBeenSet() const;

                    /**
                     * 获取Cos的SecretKey
                     * @return CosSecretKey Cos的SecretKey
                     * 
                     */
                    std::string GetCosSecretKey() const;

                    /**
                     * 设置Cos的SecretKey
                     * @param _cosSecretKey Cos的SecretKey
                     * 
                     */
                    void SetCosSecretKey(const std::string& _cosSecretKey);

                    /**
                     * 判断参数 CosSecretKey 是否已赋值
                     * @return CosSecretKey 是否已赋值
                     * 
                     */
                    bool CosSecretKeyHasBeenSet() const;

                    /**
                     * 获取cos的appid，已废弃
                     * @return AppId cos的appid，已废弃
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置cos的appid，已废弃
                     * @param _appId cos的appid，已废弃
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 脚本在COS上路径，已废弃
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 执行脚本参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * COS的Bucket名称，已废弃
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS的Region名称，已废弃
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * COS的Domain数据，已废弃
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 执行顺序
                     */
                    int64_t m_runOrder;
                    bool m_runOrderHasBeenSet;

                    /**
                     * resourceAfter 或 clusterAfter
                     */
                    std::string m_whenRun;
                    bool m_whenRunHasBeenSet;

                    /**
                     * 脚本文件名，已废弃
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                    /**
                     * 脚本的cos地址
                     */
                    std::string m_cosFileURI;
                    bool m_cosFileURIHasBeenSet;

                    /**
                     * cos的SecretId
                     */
                    std::string m_cosSecretId;
                    bool m_cosSecretIdHasBeenSet;

                    /**
                     * Cos的SecretKey
                     */
                    std::string m_cosSecretKey;
                    bool m_cosSecretKeyHasBeenSet;

                    /**
                     * cos的appid，已废弃
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PREEXECUTEFILESETTINGS_H_
