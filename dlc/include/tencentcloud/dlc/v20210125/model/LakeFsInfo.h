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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TagInfo.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 描述DLC托管存储基本信息
                */
                class LakeFsInfo : public AbstractModel
                {
                public:
                    LakeFsInfo();
                    ~LakeFsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>托管存储名称</p>
                     * @return Name <p>托管存储名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>托管存储名称</p>
                     * @param _name <p>托管存储名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>托管存储类型</p>
                     * @return Type <p>托管存储类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>托管存储类型</p>
                     * @param _type <p>托管存储类型</p>
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
                     * 获取<p>存储用量</p>
                     * @return SpaceUsedSize <p>存储用量</p>
                     * 
                     */
                    double GetSpaceUsedSize() const;

                    /**
                     * 设置<p>存储用量</p>
                     * @param _spaceUsedSize <p>存储用量</p>
                     * 
                     */
                    void SetSpaceUsedSize(const double& _spaceUsedSize);

                    /**
                     * 判断参数 SpaceUsedSize 是否已赋值
                     * @return SpaceUsedSize 是否已赋值
                     * 
                     */
                    bool SpaceUsedSizeHasBeenSet() const;

                    /**
                     * 获取<p>创建时候的时间戳</p>
                     * @return CreateTimeStamp <p>创建时候的时间戳</p>
                     * 
                     */
                    int64_t GetCreateTimeStamp() const;

                    /**
                     * 设置<p>创建时候的时间戳</p>
                     * @param _createTimeStamp <p>创建时候的时间戳</p>
                     * 
                     */
                    void SetCreateTimeStamp(const int64_t& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     * 
                     */
                    bool CreateTimeStampHasBeenSet() const;

                    /**
                     * 获取<p>是否是用户默认桶，0：默认桶，1：非默认桶</p>
                     * @return DefaultBucket <p>是否是用户默认桶，0：默认桶，1：非默认桶</p>
                     * 
                     */
                    int64_t GetDefaultBucket() const;

                    /**
                     * 设置<p>是否是用户默认桶，0：默认桶，1：非默认桶</p>
                     * @param _defaultBucket <p>是否是用户默认桶，0：默认桶，1：非默认桶</p>
                     * 
                     */
                    void SetDefaultBucket(const int64_t& _defaultBucket);

                    /**
                     * 判断参数 DefaultBucket 是否已赋值
                     * @return DefaultBucket 是否已赋值
                     * 
                     */
                    bool DefaultBucketHasBeenSet() const;

                    /**
                     * 获取<p>托管存储short name</p>
                     * @return ShortName <p>托管存储short name</p>
                     * 
                     */
                    std::string GetShortName() const;

                    /**
                     * 设置<p>托管存储short name</p>
                     * @param _shortName <p>托管存储short name</p>
                     * 
                     */
                    void SetShortName(const std::string& _shortName);

                    /**
                     * 判断参数 ShortName 是否已赋值
                     * @return ShortName 是否已赋值
                     * 
                     */
                    bool ShortNameHasBeenSet() const;

                    /**
                     * 获取<p>桶描述信息</p>
                     * @return Description <p>桶描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>桶描述信息</p>
                     * @param _description <p>桶描述信息</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>托管桶状态，当前取值为：creating、bind、readOnly、isolate</p>
                     * @return Status <p>托管桶状态，当前取值为：creating、bind、readOnly、isolate</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>托管桶状态，当前取值为：creating、bind、readOnly、isolate</p>
                     * @param _status <p>托管桶状态，当前取值为：creating、bind、readOnly、isolate</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>托管存储桶标签列表</p>
                     * @return TagList <p>托管存储桶标签列表</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>托管存储桶标签列表</p>
                     * @param _tagList <p>托管存储桶标签列表</p>
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>是否是多AZ存储桶</p>
                     * @return MultiAZ <p>是否是多AZ存储桶</p>
                     * 
                     */
                    bool GetMultiAZ() const;

                    /**
                     * 设置<p>是否是多AZ存储桶</p>
                     * @param _multiAZ <p>是否是多AZ存储桶</p>
                     * 
                     */
                    void SetMultiAZ(const bool& _multiAZ);

                    /**
                     * 判断参数 MultiAZ 是否已赋值
                     * @return MultiAZ 是否已赋值
                     * 
                     */
                    bool MultiAZHasBeenSet() const;

                    /**
                     * 获取<p>存储桶配置信息</p>
                     * @return Configuration <p>存储桶配置信息</p>
                     * 
                     */
                    std::vector<KVPair> GetConfiguration() const;

                    /**
                     * 设置<p>存储桶配置信息</p>
                     * @param _configuration <p>存储桶配置信息</p>
                     * 
                     */
                    void SetConfiguration(const std::vector<KVPair>& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                private:

                    /**
                     * <p>托管存储名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>托管存储类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>存储用量</p>
                     */
                    double m_spaceUsedSize;
                    bool m_spaceUsedSizeHasBeenSet;

                    /**
                     * <p>创建时候的时间戳</p>
                     */
                    int64_t m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                    /**
                     * <p>是否是用户默认桶，0：默认桶，1：非默认桶</p>
                     */
                    int64_t m_defaultBucket;
                    bool m_defaultBucketHasBeenSet;

                    /**
                     * <p>托管存储short name</p>
                     */
                    std::string m_shortName;
                    bool m_shortNameHasBeenSet;

                    /**
                     * <p>桶描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>托管桶状态，当前取值为：creating、bind、readOnly、isolate</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>托管存储桶标签列表</p>
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>是否是多AZ存储桶</p>
                     */
                    bool m_multiAZ;
                    bool m_multiAZHasBeenSet;

                    /**
                     * <p>存储桶配置信息</p>
                     */
                    std::vector<KVPair> m_configuration;
                    bool m_configurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_
