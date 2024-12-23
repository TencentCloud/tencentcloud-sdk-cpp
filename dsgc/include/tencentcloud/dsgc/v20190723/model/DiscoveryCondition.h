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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DISCOVERYCONDITION_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DISCOVERYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RDBInstance.h>
#include <tencentcloud/dsgc/v20190723/model/COSInstance.h>
#include <tencentcloud/dsgc/v20190723/model/NOSQLInstance.h>
#include <tencentcloud/dsgc/v20190723/model/ESInstance.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DSPA敏感数据扫描数据源条件
                */
                class DiscoveryCondition : public AbstractModel
                {
                public:
                    DiscoveryCondition();
                    ~DiscoveryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RDB实例列表
                     * @return RDBInstances RDB实例列表
                     * 
                     */
                    std::vector<RDBInstance> GetRDBInstances() const;

                    /**
                     * 设置RDB实例列表
                     * @param _rDBInstances RDB实例列表
                     * 
                     */
                    void SetRDBInstances(const std::vector<RDBInstance>& _rDBInstances);

                    /**
                     * 判断参数 RDBInstances 是否已赋值
                     * @return RDBInstances 是否已赋值
                     * 
                     */
                    bool RDBInstancesHasBeenSet() const;

                    /**
                     * 获取COS实例列表
                     * @return COSInstances COS实例列表
                     * 
                     */
                    std::vector<COSInstance> GetCOSInstances() const;

                    /**
                     * 设置COS实例列表
                     * @param _cOSInstances COS实例列表
                     * 
                     */
                    void SetCOSInstances(const std::vector<COSInstance>& _cOSInstances);

                    /**
                     * 判断参数 COSInstances 是否已赋值
                     * @return COSInstances 是否已赋值
                     * 
                     */
                    bool COSInstancesHasBeenSet() const;

                    /**
                     * 获取Mongo实例列表
                     * @return NOSQLInstances Mongo实例列表
                     * 
                     */
                    std::vector<NOSQLInstance> GetNOSQLInstances() const;

                    /**
                     * 设置Mongo实例列表
                     * @param _nOSQLInstances Mongo实例列表
                     * 
                     */
                    void SetNOSQLInstances(const std::vector<NOSQLInstance>& _nOSQLInstances);

                    /**
                     * 判断参数 NOSQLInstances 是否已赋值
                     * @return NOSQLInstances 是否已赋值
                     * 
                     */
                    bool NOSQLInstancesHasBeenSet() const;

                    /**
                     * 获取ES实例列表
                     * @return ESInstances ES实例列表
                     * 
                     */
                    std::vector<ESInstance> GetESInstances() const;

                    /**
                     * 设置ES实例列表
                     * @param _eSInstances ES实例列表
                     * 
                     */
                    void SetESInstances(const std::vector<ESInstance>& _eSInstances);

                    /**
                     * 判断参数 ESInstances 是否已赋值
                     * @return ESInstances 是否已赋值
                     * 
                     */
                    bool ESInstancesHasBeenSet() const;

                private:

                    /**
                     * RDB实例列表
                     */
                    std::vector<RDBInstance> m_rDBInstances;
                    bool m_rDBInstancesHasBeenSet;

                    /**
                     * COS实例列表
                     */
                    std::vector<COSInstance> m_cOSInstances;
                    bool m_cOSInstancesHasBeenSet;

                    /**
                     * Mongo实例列表
                     */
                    std::vector<NOSQLInstance> m_nOSQLInstances;
                    bool m_nOSQLInstancesHasBeenSet;

                    /**
                     * ES实例列表
                     */
                    std::vector<ESInstance> m_eSInstances;
                    bool m_eSInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DISCOVERYCONDITION_H_
