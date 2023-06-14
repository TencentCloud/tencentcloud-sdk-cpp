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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEOPTION_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/ConsistencyParams.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 迁移任务配置选项
                */
                class MigrateOption : public AbstractModel
                {
                public:
                    MigrateOption();
                    ~MigrateOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务运行模式，值包括：1-立即执行，2-定时执行
                     * @return RunMode 任务运行模式，值包括：1-立即执行，2-定时执行
                     * 
                     */
                    int64_t GetRunMode() const;

                    /**
                     * 设置任务运行模式，值包括：1-立即执行，2-定时执行
                     * @param _runMode 任务运行模式，值包括：1-立即执行，2-定时执行
                     * 
                     */
                    void SetRunMode(const int64_t& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取期望执行时间，当runMode=2时，该字段必填，时间格式：yyyy-mm-dd hh:mm:ss
                     * @return ExpectTime 期望执行时间，当runMode=2时，该字段必填，时间格式：yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置期望执行时间，当runMode=2时，该字段必填，时间格式：yyyy-mm-dd hh:mm:ss
                     * @param _expectTime 期望执行时间，当runMode=2时，该字段必填，时间格式：yyyy-mm-dd hh:mm:ss
                     * 
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     * 
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取数据迁移类型，值包括：1-结构迁移,2-全量迁移,3-全量+增量迁移
                     * @return MigrateType 数据迁移类型，值包括：1-结构迁移,2-全量迁移,3-全量+增量迁移
                     * 
                     */
                    int64_t GetMigrateType() const;

                    /**
                     * 设置数据迁移类型，值包括：1-结构迁移,2-全量迁移,3-全量+增量迁移
                     * @param _migrateType 数据迁移类型，值包括：1-结构迁移,2-全量迁移,3-全量+增量迁移
                     * 
                     */
                    void SetMigrateType(const int64_t& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     * 
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取迁移对象，1-整个实例，2-指定库表
                     * @return MigrateObject 迁移对象，1-整个实例，2-指定库表
                     * 
                     */
                    int64_t GetMigrateObject() const;

                    /**
                     * 设置迁移对象，1-整个实例，2-指定库表
                     * @param _migrateObject 迁移对象，1-整个实例，2-指定库表
                     * 
                     */
                    void SetMigrateObject(const int64_t& _migrateObject);

                    /**
                     * 判断参数 MigrateObject 是否已赋值
                     * @return MigrateObject 是否已赋值
                     * 
                     */
                    bool MigrateObjectHasBeenSet() const;

                    /**
                     * 获取抽样数据一致性检测参数，1-未配置,2-全量检测,3-抽样检测, 4-仅校验不一致表,5-不检测
                     * @return ConsistencyType 抽样数据一致性检测参数，1-未配置,2-全量检测,3-抽样检测, 4-仅校验不一致表,5-不检测
                     * 
                     */
                    int64_t GetConsistencyType() const;

                    /**
                     * 设置抽样数据一致性检测参数，1-未配置,2-全量检测,3-抽样检测, 4-仅校验不一致表,5-不检测
                     * @param _consistencyType 抽样数据一致性检测参数，1-未配置,2-全量检测,3-抽样检测, 4-仅校验不一致表,5-不检测
                     * 
                     */
                    void SetConsistencyType(const int64_t& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     * 
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                    /**
                     * 获取是否用源库Root账户覆盖目标库，值包括：0-不覆盖，1-覆盖，选择库表或者结构迁移时应该为0
                     * @return IsOverrideRoot 是否用源库Root账户覆盖目标库，值包括：0-不覆盖，1-覆盖，选择库表或者结构迁移时应该为0
                     * 
                     */
                    int64_t GetIsOverrideRoot() const;

                    /**
                     * 设置是否用源库Root账户覆盖目标库，值包括：0-不覆盖，1-覆盖，选择库表或者结构迁移时应该为0
                     * @param _isOverrideRoot 是否用源库Root账户覆盖目标库，值包括：0-不覆盖，1-覆盖，选择库表或者结构迁移时应该为0
                     * 
                     */
                    void SetIsOverrideRoot(const int64_t& _isOverrideRoot);

                    /**
                     * 判断参数 IsOverrideRoot 是否已赋值
                     * @return IsOverrideRoot 是否已赋值
                     * 
                     */
                    bool IsOverrideRootHasBeenSet() const;

                    /**
                     * 获取不同数据库用到的额外参数.以JSON格式描述. 
Redis可定义如下的参数: 
{ 
	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 
	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 
	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 
	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 
	"ReplTimeout":120，		复制超时时间(秒) 
}
MongoDB可定义如下的参数: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL暂不支持额外参数设置。
                     * @return ExternParams 不同数据库用到的额外参数.以JSON格式描述. 
Redis可定义如下的参数: 
{ 
	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 
	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 
	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 
	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 
	"ReplTimeout":120，		复制超时时间(秒) 
}
MongoDB可定义如下的参数: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL暂不支持额外参数设置。
                     * 
                     */
                    std::string GetExternParams() const;

                    /**
                     * 设置不同数据库用到的额外参数.以JSON格式描述. 
Redis可定义如下的参数: 
{ 
	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 
	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 
	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 
	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 
	"ReplTimeout":120，		复制超时时间(秒) 
}
MongoDB可定义如下的参数: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL暂不支持额外参数设置。
                     * @param _externParams 不同数据库用到的额外参数.以JSON格式描述. 
Redis可定义如下的参数: 
{ 
	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 
	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 
	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 
	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 
	"ReplTimeout":120，		复制超时时间(秒) 
}
MongoDB可定义如下的参数: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL暂不支持额外参数设置。
                     * 
                     */
                    void SetExternParams(const std::string& _externParams);

                    /**
                     * 判断参数 ExternParams 是否已赋值
                     * @return ExternParams 是否已赋值
                     * 
                     */
                    bool ExternParamsHasBeenSet() const;

                    /**
                     * 获取仅用于“抽样数据一致性检测”，ConsistencyType配置为抽样检测时，必选
                     * @return ConsistencyParams 仅用于“抽样数据一致性检测”，ConsistencyType配置为抽样检测时，必选
                     * 
                     */
                    ConsistencyParams GetConsistencyParams() const;

                    /**
                     * 设置仅用于“抽样数据一致性检测”，ConsistencyType配置为抽样检测时，必选
                     * @param _consistencyParams 仅用于“抽样数据一致性检测”，ConsistencyType配置为抽样检测时，必选
                     * 
                     */
                    void SetConsistencyParams(const ConsistencyParams& _consistencyParams);

                    /**
                     * 判断参数 ConsistencyParams 是否已赋值
                     * @return ConsistencyParams 是否已赋值
                     * 
                     */
                    bool ConsistencyParamsHasBeenSet() const;

                private:

                    /**
                     * 任务运行模式，值包括：1-立即执行，2-定时执行
                     */
                    int64_t m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 期望执行时间，当runMode=2时，该字段必填，时间格式：yyyy-mm-dd hh:mm:ss
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * 数据迁移类型，值包括：1-结构迁移,2-全量迁移,3-全量+增量迁移
                     */
                    int64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * 迁移对象，1-整个实例，2-指定库表
                     */
                    int64_t m_migrateObject;
                    bool m_migrateObjectHasBeenSet;

                    /**
                     * 抽样数据一致性检测参数，1-未配置,2-全量检测,3-抽样检测, 4-仅校验不一致表,5-不检测
                     */
                    int64_t m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * 是否用源库Root账户覆盖目标库，值包括：0-不覆盖，1-覆盖，选择库表或者结构迁移时应该为0
                     */
                    int64_t m_isOverrideRoot;
                    bool m_isOverrideRootHasBeenSet;

                    /**
                     * 不同数据库用到的额外参数.以JSON格式描述. 
Redis可定义如下的参数: 
{ 
	"ClientOutputBufferHardLimit":512, 	从机缓冲区的硬性容量限制(MB) 
	"ClientOutputBufferSoftLimit":512, 	从机缓冲区的软性容量限制(MB) 
	"ClientOutputBufferPersistTime":60, 从机缓冲区的软性限制持续时间(秒) 
	"ReplBacklogSize":512, 	环形缓冲区容量限制(MB) 
	"ReplTimeout":120，		复制超时时间(秒) 
}
MongoDB可定义如下的参数: 
{
	'SrcAuthDatabase':'admin', 
	'SrcAuthFlag': "1", 
	'SrcAuthMechanism':"SCRAM-SHA-1"
}
MySQL暂不支持额外参数设置。
                     */
                    std::string m_externParams;
                    bool m_externParamsHasBeenSet;

                    /**
                     * 仅用于“抽样数据一致性检测”，ConsistencyType配置为抽样检测时，必选
                     */
                    ConsistencyParams m_consistencyParams;
                    bool m_consistencyParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEOPTION_H_
