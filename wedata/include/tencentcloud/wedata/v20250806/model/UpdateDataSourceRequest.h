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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DataSourceFileUpload.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateDataSource请求参数结构体
                */
                class UpdateDataSourceRequest : public AbstractModel
                {
                public:
                    UpdateDataSourceRequest();
                    ~UpdateDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据源id</p>
                     * @return Id <p>数据源id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>数据源id</p>
                     * @param _id <p>数据源id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;&lt;instanceId&gt;&quot;,    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://&lt;host&gt;:&lt;port&gt;;DatabaseName=&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;ip&quot;: &quot;&lt;host&gt;&quot;,    &quot;port&quot;: &quot;&lt;port&gt;&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle:{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@&lt;host&gt;:&lt;port&gt;:&lt;sid&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;admin&quot;        }    ],    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:    - sasl    - jaas    - sasl_plaintext    - sasl_ssl    - GSSAPI    ssl:    -PLAIN    -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;&lt;principal&gt;&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;&lt;secretId&gt;&quot;,    &quot;secretKey&quot;: &quot;&lt;secretKey&gt;&quot;,    &quot;bucket&quot;: &quot;&lt;bucket&gt;&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * @return ProdConProperties <p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;&lt;instanceId&gt;&quot;,    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://&lt;host&gt;:&lt;port&gt;;DatabaseName=&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;ip&quot;: &quot;&lt;host&gt;&quot;,    &quot;port&quot;: &quot;&lt;port&gt;&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle:{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@&lt;host&gt;:&lt;port&gt;:&lt;sid&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;admin&quot;        }    ],    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:    - sasl    - jaas    - sasl_plaintext    - sasl_ssl    - GSSAPI    ssl:    -PLAIN    -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;&lt;principal&gt;&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;&lt;secretId&gt;&quot;,    &quot;secretKey&quot;: &quot;&lt;secretKey&gt;&quot;,    &quot;bucket&quot;: &quot;&lt;bucket&gt;&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * 
                     */
                    std::string GetProdConProperties() const;

                    /**
                     * 设置<p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;&lt;instanceId&gt;&quot;,    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://&lt;host&gt;:&lt;port&gt;;DatabaseName=&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;ip&quot;: &quot;&lt;host&gt;&quot;,    &quot;port&quot;: &quot;&lt;port&gt;&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle:{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@&lt;host&gt;:&lt;port&gt;:&lt;sid&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;admin&quot;        }    ],    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:    - sasl    - jaas    - sasl_plaintext    - sasl_ssl    - GSSAPI    ssl:    -PLAIN    -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;&lt;principal&gt;&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;&lt;secretId&gt;&quot;,    &quot;secretKey&quot;: &quot;&lt;secretKey&gt;&quot;,    &quot;bucket&quot;: &quot;&lt;bucket&gt;&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * @param _prodConProperties <p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;&lt;instanceId&gt;&quot;,    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://&lt;host&gt;:&lt;port&gt;;DatabaseName=&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;ip&quot;: &quot;&lt;host&gt;&quot;,    &quot;port&quot;: &quot;&lt;port&gt;&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle:{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@&lt;host&gt;:&lt;port&gt;:&lt;sid&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;admin&quot;        }    ],    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:    - sasl    - jaas    - sasl_plaintext    - sasl_ssl    - GSSAPI    ssl:    -PLAIN    -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;&lt;principal&gt;&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;&lt;secretId&gt;&quot;,    &quot;secretKey&quot;: &quot;&lt;secretKey&gt;&quot;,    &quot;bucket&quot;: &quot;&lt;bucket&gt;&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * 
                     */
                    void SetProdConProperties(const std::string& _prodConProperties);

                    /**
                     * 判断参数 ProdConProperties 是否已赋值
                     * @return ProdConProperties 是否已赋值
                     * 
                     */
                    bool ProdConPropertiesHasBeenSet() const;

                    /**
                     * 获取<p>若项目为标准模式，则此字段必填</p>
                     * @return DevConProperties <p>若项目为标准模式，则此字段必填</p>
                     * 
                     */
                    std::string GetDevConProperties() const;

                    /**
                     * 设置<p>若项目为标准模式，则此字段必填</p>
                     * @param _devConProperties <p>若项目为标准模式，则此字段必填</p>
                     * 
                     */
                    void SetDevConProperties(const std::string& _devConProperties);

                    /**
                     * 判断参数 DevConProperties 是否已赋值
                     * @return DevConProperties 是否已赋值
                     * 
                     */
                    bool DevConPropertiesHasBeenSet() const;

                    /**
                     * 获取<p>生产环境数据源文件上传</p>
                     * @return ProdFileUpload <p>生产环境数据源文件上传</p>
                     * 
                     */
                    DataSourceFileUpload GetProdFileUpload() const;

                    /**
                     * 设置<p>生产环境数据源文件上传</p>
                     * @param _prodFileUpload <p>生产环境数据源文件上传</p>
                     * 
                     */
                    void SetProdFileUpload(const DataSourceFileUpload& _prodFileUpload);

                    /**
                     * 判断参数 ProdFileUpload 是否已赋值
                     * @return ProdFileUpload 是否已赋值
                     * 
                     */
                    bool ProdFileUploadHasBeenSet() const;

                    /**
                     * 获取<p>开发环境数据源文件上传</p>
                     * @return DevFileUpload <p>开发环境数据源文件上传</p>
                     * 
                     */
                    DataSourceFileUpload GetDevFileUpload() const;

                    /**
                     * 设置<p>开发环境数据源文件上传</p>
                     * @param _devFileUpload <p>开发环境数据源文件上传</p>
                     * 
                     */
                    void SetDevFileUpload(const DataSourceFileUpload& _devFileUpload);

                    /**
                     * 判断参数 DevFileUpload 是否已赋值
                     * @return DevFileUpload 是否已赋值
                     * 
                     */
                    bool DevFileUploadHasBeenSet() const;

                    /**
                     * 获取<p>数据源展示名，为了可视化查看</p>
                     * @return DisplayName <p>数据源展示名，为了可视化查看</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>数据源展示名，为了可视化查看</p>
                     * @param _displayName <p>数据源展示名，为了可视化查看</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>数据源描述信息</p>
                     * @return Description <p>数据源描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>数据源描述信息</p>
                     * @param _description <p>数据源描述信息</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>数据源id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;&lt;instanceId&gt;&quot;,    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://&lt;host&gt;:&lt;port&gt;;DatabaseName=&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;ip&quot;: &quot;&lt;host&gt;&quot;,    &quot;port&quot;: &quot;&lt;port&gt;&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle:{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@&lt;host&gt;:&lt;port&gt;:&lt;sid&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;&lt;vpcId&gt;&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;admin&quot;        }    ],    &quot;db&quot;: &quot;&lt;database&gt;&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://&lt;host&gt;:&lt;port&gt;/&lt;database&gt;&quot;,    &quot;username&quot;: &quot;&lt;username&gt;&quot;,    &quot;password&quot;: &quot;&lt;password&gt;&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:    - sasl    - jaas    - sasl_plaintext    - sasl_ssl    - GSSAPI    ssl:    -PLAIN    -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;&lt;host&gt;:&lt;port&gt;&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;&lt;principal&gt;&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;&lt;secretId&gt;&quot;,    &quot;secretKey&quot;: &quot;&lt;secretKey&gt;&quot;,    &quot;bucket&quot;: &quot;&lt;bucket&gt;&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     */
                    std::string m_prodConProperties;
                    bool m_prodConPropertiesHasBeenSet;

                    /**
                     * <p>若项目为标准模式，则此字段必填</p>
                     */
                    std::string m_devConProperties;
                    bool m_devConPropertiesHasBeenSet;

                    /**
                     * <p>生产环境数据源文件上传</p>
                     */
                    DataSourceFileUpload m_prodFileUpload;
                    bool m_prodFileUploadHasBeenSet;

                    /**
                     * <p>开发环境数据源文件上传</p>
                     */
                    DataSourceFileUpload m_devFileUpload;
                    bool m_devFileUploadHasBeenSet;

                    /**
                     * <p>数据源展示名，为了可视化查看</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>数据源描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEDATASOURCEREQUEST_H_
