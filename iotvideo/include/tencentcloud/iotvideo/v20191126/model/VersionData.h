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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_VERSIONDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_VERSIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/Contents.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 固件版本详细信息
                */
                class VersionData : public AbstractModel
                {
                public:
                    VersionData();
                    ~VersionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取固件版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtaVersion 固件版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置固件版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otaVersion 固件版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取版本类型 1未发布 2测试发布 3正式发布 4禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PubStatus 版本类型 1未发布 2测试发布 3正式发布 4禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPubStatus() const;

                    /**
                     * 设置版本类型 1未发布 2测试发布 3正式发布 4禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pubStatus 版本类型 1未发布 2测试发布 3正式发布 4禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPubStatus(const uint64_t& _pubStatus);

                    /**
                     * 判断参数 PubStatus 是否已赋值
                     * @return PubStatus 是否已赋值
                     * 
                     */
                    bool PubStatusHasBeenSet() const;

                    /**
                     * 获取固件版本存储路径URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionUrl 固件版本存储路径URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionUrl() const;

                    /**
                     * 设置固件版本存储路径URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionUrl 固件版本存储路径URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionUrl(const std::string& _versionUrl);

                    /**
                     * 判断参数 VersionUrl 是否已赋值
                     * @return VersionUrl 是否已赋值
                     * 
                     */
                    bool VersionUrlHasBeenSet() const;

                    /**
                     * 获取文件大小，byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小，byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文件大小，byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小，byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 文件校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置文件校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5 文件校验码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取指定的允许升级的旧版本，PubStatus=3时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldVersions 指定的允许升级的旧版本，PubStatus=3时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldVersions() const;

                    /**
                     * 设置指定的允许升级的旧版本，PubStatus=3时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldVersions 指定的允许升级的旧版本，PubStatus=3时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldVersions(const std::string& _oldVersions);

                    /**
                     * 判断参数 OldVersions 是否已赋值
                     * @return OldVersions 是否已赋值
                     * 
                     */
                    bool OldVersionsHasBeenSet() const;

                    /**
                     * 获取指定的允许升级的旧设备id，PubStatus=2时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tids 指定的允许升级的旧设备id，PubStatus=2时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTids() const;

                    /**
                     * 设置指定的允许升级的旧设备id，PubStatus=2时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tids 指定的允许升级的旧设备id，PubStatus=2时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTids(const std::string& _tids);

                    /**
                     * 判断参数 Tids 是否已赋值
                     * @return Tids 是否已赋值
                     * 
                     */
                    bool TidsHasBeenSet() const;

                    /**
                     * 获取灰度值（0-100）,PubStatus=3时有效，表示n%的升级总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrayValue 灰度值（0-100）,PubStatus=3时有效，表示n%的升级总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGrayValue() const;

                    /**
                     * 设置灰度值（0-100）,PubStatus=3时有效，表示n%的升级总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grayValue 灰度值（0-100）,PubStatus=3时有效，表示n%的升级总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrayValue(const uint64_t& _grayValue);

                    /**
                     * 判断参数 GrayValue 是否已赋值
                     * @return GrayValue 是否已赋值
                     * 
                     */
                    bool GrayValueHasBeenSet() const;

                    /**
                     * 获取最近一次发布时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishTime 最近一次发布时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPublishTime() const;

                    /**
                     * 设置最近一次发布时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishTime 最近一次发布时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishTime(const uint64_t& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取此版本激活的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveCount 此版本激活的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActiveCount() const;

                    /**
                     * 设置此版本激活的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeCount 此版本激活的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveCount(const int64_t& _activeCount);

                    /**
                     * 判断参数 ActiveCount 是否已赋值
                     * @return ActiveCount 是否已赋值
                     * 
                     */
                    bool ActiveCountHasBeenSet() const;

                    /**
                     * 获取此版本在线的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnlineCount 此版本在线的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOnlineCount() const;

                    /**
                     * 设置此版本在线的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onlineCount 此版本在线的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnlineCount(const int64_t& _onlineCount);

                    /**
                     * 判断参数 OnlineCount 是否已赋值
                     * @return OnlineCount 是否已赋值
                     * 
                     */
                    bool OnlineCountHasBeenSet() const;

                    /**
                     * 获取上传固件文件的时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 上传固件文件的时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置上传固件文件的时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 上传固件文件的时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取发布记录的最后变更时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UploadTime 发布记录的最后变更时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUploadTime() const;

                    /**
                     * 设置发布记录的最后变更时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uploadTime 发布记录的最后变更时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUploadTime(const uint64_t& _uploadTime);

                    /**
                     * 判断参数 UploadTime 是否已赋值
                     * @return UploadTime 是否已赋值
                     * 
                     */
                    bool UploadTimeHasBeenSet() const;

                    /**
                     * 获取该固件版本发布的变更次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTimes 该固件版本发布的变更次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModifyTimes() const;

                    /**
                     * 设置该固件版本发布的变更次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTimes 该固件版本发布的变更次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTimes(const uint64_t& _modifyTimes);

                    /**
                     * 判断参数 ModifyTimes 是否已赋值
                     * @return ModifyTimes 是否已赋值
                     * 
                     */
                    bool ModifyTimesHasBeenSet() const;

                    /**
                     * 获取备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取版本发布的描述信息，需要国际化，可以为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contents 版本发布的描述信息，需要国际化，可以为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Contents GetContents() const;

                    /**
                     * 设置版本发布的描述信息，需要国际化，可以为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contents 版本发布的描述信息，需要国际化，可以为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContents(const Contents& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取月活设备数，当月第一天开始有上线的设备数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliveInMonthCnt 月活设备数，当月第一天开始有上线的设备数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAliveInMonthCnt() const;

                    /**
                     * 设置月活设备数，当月第一天开始有上线的设备数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliveInMonthCnt 月活设备数，当月第一天开始有上线的设备数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliveInMonthCnt(const uint64_t& _aliveInMonthCnt);

                    /**
                     * 判断参数 AliveInMonthCnt 是否已赋值
                     * @return AliveInMonthCnt 是否已赋值
                     * 
                     */
                    bool AliveInMonthCntHasBeenSet() const;

                private:

                    /**
                     * 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 固件版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 版本类型 1未发布 2测试发布 3正式发布 4禁用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pubStatus;
                    bool m_pubStatusHasBeenSet;

                    /**
                     * 固件版本存储路径URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionUrl;
                    bool m_versionUrlHasBeenSet;

                    /**
                     * 文件大小，byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件校验码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 指定的允许升级的旧版本，PubStatus=3时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldVersions;
                    bool m_oldVersionsHasBeenSet;

                    /**
                     * 指定的允许升级的旧设备id，PubStatus=2时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tids;
                    bool m_tidsHasBeenSet;

                    /**
                     * 灰度值（0-100）,PubStatus=3时有效，表示n%的升级总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_grayValue;
                    bool m_grayValueHasBeenSet;

                    /**
                     * 最近一次发布时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 此版本激活的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activeCount;
                    bool m_activeCountHasBeenSet;

                    /**
                     * 此版本在线的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_onlineCount;
                    bool m_onlineCountHasBeenSet;

                    /**
                     * 上传固件文件的时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 发布记录的最后变更时间，UNIX时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_uploadTime;
                    bool m_uploadTimeHasBeenSet;

                    /**
                     * 该固件版本发布的变更次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modifyTimes;
                    bool m_modifyTimesHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 版本发布的描述信息，需要国际化，可以为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Contents m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * 月活设备数，当月第一天开始有上线的设备数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_aliveInMonthCnt;
                    bool m_aliveInMonthCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_VERSIONDATA_H_
