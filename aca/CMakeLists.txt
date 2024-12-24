#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(aca_public_header
  include/tencentcloud/aca/v20210323/AcaClient.h
  )

set(aca_public_header_model
  include/tencentcloud/aca/v20210323/model/SmartDrugInfoData.h
  include/tencentcloud/aca/v20210323/model/PatientBaseInfo.h
  include/tencentcloud/aca/v20210323/model/SmartPredictReqData.h
  include/tencentcloud/aca/v20210323/model/DrugUsage.h
  include/tencentcloud/aca/v20210323/model/SyncDepartmentRespData.h
  include/tencentcloud/aca/v20210323/model/GetDrugIndicationsResponse.h
  include/tencentcloud/aca/v20210323/model/EmrDiagnosises.h
  include/tencentcloud/aca/v20210323/model/SyncStandardDictResponse.h
  include/tencentcloud/aca/v20210323/model/Dict.h
  include/tencentcloud/aca/v20210323/model/EmrQuality.h
  include/tencentcloud/aca/v20210323/model/SmartPredictResponse.h
  include/tencentcloud/aca/v20210323/model/Department.h
  include/tencentcloud/aca/v20210323/model/PhysicalExam.h
  include/tencentcloud/aca/v20210323/model/LoginDataResp.h
  include/tencentcloud/aca/v20210323/model/DocInfo.h
  include/tencentcloud/aca/v20210323/model/CriticalInfo.h
  include/tencentcloud/aca/v20210323/model/IndicationsDrug.h
  include/tencentcloud/aca/v20210323/model/RiskInfo.h
  include/tencentcloud/aca/v20210323/model/SyncStandardDictRequest.h
  include/tencentcloud/aca/v20210323/model/SmartPredictRequest.h
  include/tencentcloud/aca/v20210323/model/PatientHistory.h
  include/tencentcloud/aca/v20210323/model/GetDrugIndicationsRequest.h
  include/tencentcloud/aca/v20210323/model/RecommendedUsage.h
  include/tencentcloud/aca/v20210323/model/LoginData.h
  include/tencentcloud/aca/v20210323/model/DurgPropertyInfo.h
  include/tencentcloud/aca/v20210323/model/LoginOutData.h
  include/tencentcloud/aca/v20210323/model/CommonHeader.h
  include/tencentcloud/aca/v20210323/model/RecordQuality.h
  include/tencentcloud/aca/v20210323/model/SmartDrugInfoRequest.h
  include/tencentcloud/aca/v20210323/model/UploadDrugData.h
  include/tencentcloud/aca/v20210323/model/VitalSignsInfo.h
  include/tencentcloud/aca/v20210323/model/PatientFamilyHistory.h
  include/tencentcloud/aca/v20210323/model/SyncDepartmentRequest.h
  include/tencentcloud/aca/v20210323/model/SmartPredictRespData.h
  include/tencentcloud/aca/v20210323/model/LoginHisToolResponse.h
  include/tencentcloud/aca/v20210323/model/SmartDrugInfoResp.h
  include/tencentcloud/aca/v20210323/model/DoctorInfo.h
  include/tencentcloud/aca/v20210323/model/UploadDrugsResponse.h
  include/tencentcloud/aca/v20210323/model/SyncDictData.h
  include/tencentcloud/aca/v20210323/model/Drug.h
  include/tencentcloud/aca/v20210323/model/GetDrugIndicationsReqData.h
  include/tencentcloud/aca/v20210323/model/DiagnosisInfo.h
  include/tencentcloud/aca/v20210323/model/LoginOutHisToolResponse.h
  include/tencentcloud/aca/v20210323/model/RationalDrugInfo.h
  include/tencentcloud/aca/v20210323/model/HealthPrescriptions.h
  include/tencentcloud/aca/v20210323/model/Abnormals.h
  include/tencentcloud/aca/v20210323/model/OperateResp.h
  include/tencentcloud/aca/v20210323/model/SmartDrugInfoResponse.h
  include/tencentcloud/aca/v20210323/model/LoginOutHisToolRequest.h
  include/tencentcloud/aca/v20210323/model/CurrentDiagnosis.h
  include/tencentcloud/aca/v20210323/model/RequestCase.h
  include/tencentcloud/aca/v20210323/model/GetDrugIndicationsResp.h
  include/tencentcloud/aca/v20210323/model/LoginOutResponseData.h
  include/tencentcloud/aca/v20210323/model/TreatmentGuide.h
  include/tencentcloud/aca/v20210323/model/LoginHeader.h
  include/tencentcloud/aca/v20210323/model/SyncDepartmentData.h
  include/tencentcloud/aca/v20210323/model/SyncDepartmentResponse.h
  include/tencentcloud/aca/v20210323/model/LoginHisToolRequest.h
  include/tencentcloud/aca/v20210323/model/UploadDrugsRequest.h
  include/tencentcloud/aca/v20210323/model/DifferDiagnosis.h
  include/tencentcloud/aca/v20210323/model/DrugList.h
  include/tencentcloud/aca/v20210323/model/ReferralInfo.h
  include/tencentcloud/aca/v20210323/model/LoginOutHeader.h
  include/tencentcloud/aca/v20210323/model/SuspectedDiagnosis.h
  )

set(aca_src
  src/v20210323/AcaClient.cpp
  src/v20210323/model/SmartDrugInfoData.cpp
  src/v20210323/model/PatientBaseInfo.cpp
  src/v20210323/model/SmartPredictReqData.cpp
  src/v20210323/model/DrugUsage.cpp
  src/v20210323/model/SyncDepartmentRespData.cpp
  src/v20210323/model/GetDrugIndicationsResponse.cpp
  src/v20210323/model/EmrDiagnosises.cpp
  src/v20210323/model/SyncStandardDictResponse.cpp
  src/v20210323/model/Dict.cpp
  src/v20210323/model/EmrQuality.cpp
  src/v20210323/model/SmartPredictResponse.cpp
  src/v20210323/model/Department.cpp
  src/v20210323/model/PhysicalExam.cpp
  src/v20210323/model/LoginDataResp.cpp
  src/v20210323/model/DocInfo.cpp
  src/v20210323/model/CriticalInfo.cpp
  src/v20210323/model/IndicationsDrug.cpp
  src/v20210323/model/RiskInfo.cpp
  src/v20210323/model/SyncStandardDictRequest.cpp
  src/v20210323/model/SmartPredictRequest.cpp
  src/v20210323/model/PatientHistory.cpp
  src/v20210323/model/GetDrugIndicationsRequest.cpp
  src/v20210323/model/RecommendedUsage.cpp
  src/v20210323/model/LoginData.cpp
  src/v20210323/model/DurgPropertyInfo.cpp
  src/v20210323/model/LoginOutData.cpp
  src/v20210323/model/CommonHeader.cpp
  src/v20210323/model/RecordQuality.cpp
  src/v20210323/model/SmartDrugInfoRequest.cpp
  src/v20210323/model/UploadDrugData.cpp
  src/v20210323/model/VitalSignsInfo.cpp
  src/v20210323/model/PatientFamilyHistory.cpp
  src/v20210323/model/SyncDepartmentRequest.cpp
  src/v20210323/model/SmartPredictRespData.cpp
  src/v20210323/model/LoginHisToolResponse.cpp
  src/v20210323/model/SmartDrugInfoResp.cpp
  src/v20210323/model/DoctorInfo.cpp
  src/v20210323/model/UploadDrugsResponse.cpp
  src/v20210323/model/SyncDictData.cpp
  src/v20210323/model/Drug.cpp
  src/v20210323/model/GetDrugIndicationsReqData.cpp
  src/v20210323/model/DiagnosisInfo.cpp
  src/v20210323/model/LoginOutHisToolResponse.cpp
  src/v20210323/model/RationalDrugInfo.cpp
  src/v20210323/model/HealthPrescriptions.cpp
  src/v20210323/model/Abnormals.cpp
  src/v20210323/model/OperateResp.cpp
  src/v20210323/model/SmartDrugInfoResponse.cpp
  src/v20210323/model/LoginOutHisToolRequest.cpp
  src/v20210323/model/CurrentDiagnosis.cpp
  src/v20210323/model/RequestCase.cpp
  src/v20210323/model/GetDrugIndicationsResp.cpp
  src/v20210323/model/LoginOutResponseData.cpp
  src/v20210323/model/TreatmentGuide.cpp
  src/v20210323/model/LoginHeader.cpp
  src/v20210323/model/SyncDepartmentData.cpp
  src/v20210323/model/SyncDepartmentResponse.cpp
  src/v20210323/model/LoginHisToolRequest.cpp
  src/v20210323/model/UploadDrugsRequest.cpp
  src/v20210323/model/DifferDiagnosis.cpp
  src/v20210323/model/DrugList.cpp
  src/v20210323/model/ReferralInfo.cpp
  src/v20210323/model/LoginOutHeader.cpp
  src/v20210323/model/SuspectedDiagnosis.cpp
  )

set(aca_include
    include/tencentcloud/aca
  )

add_library(aca ${LIB_TYPE}
  ${aca_public_header}
  ${aca_public_header_model}
  ${aca_src})

set_target_properties(aca
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aca
  )

target_include_directories(aca
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(aca
  core)

#install(FILES ${aca_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aca/v20210323)
#install(FILES ${aca_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aca/v20210323/model)
install(DIRECTORY ${aca_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS aca
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
