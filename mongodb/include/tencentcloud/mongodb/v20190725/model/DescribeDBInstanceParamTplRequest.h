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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParamTpl请求参数结构体
                */
                class DescribeDBInstanceParamTplRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceParamTplRequest();
                    ~DescribeDBInstanceParamTplRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板 ID。请通过接口 [DescribeDBInstanceParamTpl](https://cloud.tencent.com/document/product/240/109155) 获取模板 ID。
                     * @return TplIds 参数模板 ID。请通过接口 [DescribeDBInstanceParamTpl](https://cloud.tencent.com/document/product/240/109155) 获取模板 ID。
                     * 
                     */
                    std::vector<std::string> GetTplIds() const;

                    /**
                     * 设置参数模板 ID。请通过接口 [DescribeDBInstanceParamTpl](https://cloud.tencent.com/document/product/240/109155) 获取模板 ID。
                     * @param _tplIds 参数模板 ID。请通过接口 [DescribeDBInstanceParamTpl](https://cloud.tencent.com/document/product/240/109155) 获取模板 ID。
                     * 
                     */
                    void SetTplIds(const std::vector<std::string>& _tplIds);

                    /**
                     * 判断参数 TplIds 是否已赋值
                     * @return TplIds 是否已赋值
                     * 
                     */
                    bool TplIdsHasBeenSet() const;

                    /**
                     * 获取指定查询的模板名称。
                     * @return TplNames 指定查询的模板名称。
                     * 
                     */
                    std::vector<std::string> GetTplNames() const;

                    /**
                     * 设置指定查询的模板名称。
                     * @param _tplNames 指定查询的模板名称。
                     * 
                     */
                    void SetTplNames(const std::vector<std::string>& _tplNames);

                    /**
                     * 判断参数 TplNames 是否已赋值
                     * @return TplNames 是否已赋值
                     * 
                     */
                    bool TplNamesHasBeenSet() const;

                    /**
                     * 获取指定所需查询的参数模板的数据库版本号。具体支持的版本信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     * @return MongoVersion 指定所需查询的参数模板的数据库版本号。具体支持的版本信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     * 
                     */
                    std::vector<std::string> GetMongoVersion() const;

                    /**
                     * 设置指定所需查询的参数模板的数据库版本号。具体支持的版本信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     * @param _mongoVersion 指定所需查询的参数模板的数据库版本号。具体支持的版本信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     * 
                     */
                    void SetMongoVersion(const std::vector<std::string>& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取指定查询的模板类型。
- DEFAULT：系统默认模板。
- CUSTOMIZE：自定义模板。
                     * @return TplType 指定查询的模板类型。
- DEFAULT：系统默认模板。
- CUSTOMIZE：自定义模板。
                     * 
                     */
                    std::string GetTplType() const;

                    /**
                     * 设置指定查询的模板类型。
- DEFAULT：系统默认模板。
- CUSTOMIZE：自定义模板。
                     * @param _tplType 指定查询的模板类型。
- DEFAULT：系统默认模板。
- CUSTOMIZE：自定义模板。
                     * 
                     */
                    void SetTplType(const std::string& _tplType);

                    /**
                     * 判断参数 TplType 是否已赋值
                     * @return TplType 是否已赋值
                     * 
                     */
                    bool TplTypeHasBeenSet() const;

                private:

                    /**
                     * 参数模板 ID。请通过接口 [DescribeDBInstanceParamTpl](https://cloud.tencent.com/document/product/240/109155) 获取模板 ID。
                     */
                    std::vector<std::string> m_tplIds;
                    bool m_tplIdsHasBeenSet;

                    /**
                     * 指定查询的模板名称。
                     */
                    std::vector<std::string> m_tplNames;
                    bool m_tplNamesHasBeenSet;

                    /**
                     * 指定所需查询的参数模板的数据库版本号。具体支持的版本信息，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/38567) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     */
                    std::vector<std::string> m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 指定查询的模板类型。
- DEFAULT：系统默认模板。
- CUSTOMIZE：自定义模板。
                     */
                    std::string m_tplType;
                    bool m_tplTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLREQUEST_H_
